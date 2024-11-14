CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
CHECK_FLAGS = -lcheck -lm -lpthread -ftest-coverage -fprofile-arcs
GCOV_FLAGS = -ftest-coverage -fprofile-arcs -fPIC
SRC = $(wildcard s21_*.c)
OBJ = $(SRC:%.c=%.o)
TEST = tests/test
TEST_SRC = $(wildcard $(TEST)_*/test*.c)
TEST_OBJ = $(patsubst test%.c, test%.o, $(TEST_SRC))

# CHECK FOR SYSTEM
UNAME:=$(shell uname -s)
ifeq ($(UNAME), Linux)
 CFLAGS += -lsubunit
 TEST_FLAGS = -pthread -lcheck_pic -pthread -lrt -lm -lsubunit
 ifneq ("$(wildcard /proc/version)","")
	OPENER = wslview
	endif
else
	OPENER = xdg_open
	endif
ifeq ($(UNAME), Darwin)
 TEST_FLAGS = $(shell pkg-config --cflags --libs check)
 OPENER = open
endif

all: s21_decimal.a

s21_decimal.a: $(OBJ)
	ar rcs s21_decimal.a $^
	ranlib s21_decimal.a

$(TEST_OBJ): %.o: %.c
	$(CC) -c $(CFLAGS) $(TEST_FLAGS) -o $@ $<

test.a: $(TEST_OBJ)
	ar rc $(TEST).a $^
	ranlib $(TEST).a

covered:
	$(CC) $(CFLAGS) -c $(SRC) --coverage
	ar rc s21_decimal.a $(OBJ)
	ranlib s21_decimal.a


test: clean covered test.a
	$(CC) $(CFLAGS) --coverage -o $(TEST)_suite.o $(TEST)_suite.c -c $(TEST_FLAGS)
	$(CC) $(TEST)_suite.o $(TEST).a s21_decimal.a -o $(TEST) --coverage $(CFLAGS) $(TEST_FLAGS)
	./$(TEST)

gcov_report: test
	lcov -t "s21_decimal" -o s21_decimal.info -c -d .
	genhtml -o gcov_report s21_decimal.info
	$(OPENER) ./gcov_report/index.html

style:
	cp ./../materials/linters/.clang-format .
	clang-format -i *.c *.h tests/**/*.c tests/**/*.h tests/*.c tests/*.h
	rm .clang-format

clean: clean_without_tests
	rm -rf $(TEST)

clean_without_tests:
	rm -rf s21_decimal s21_decimal_tests_cov *.o *.a *.gcno *.gcda *.out *.dSYM *.info gcov_report
	rm -rf tests/**/*.o tests/*.a tests/*.gcno tests/*.gcda tests/*.o tests/*.out tests/*.dSYM tests/*.info

rebuild:
	make clean
	make all

statictest:
	cppcheck --enable=all --suppress=missingIncludeSystem .
	cd .. && docker build . -t school21/miniverter:1.0 -f materials/build/Dockerfile && docker run school21/miniverter:1.0
	make rebuild

beforecommit:
	make style
	make statictest
	make clean

test_leaks: clean covered test.a
	$(CC) $(CFLAGS) --coverage -o $(TEST)_suite.o $(TEST)_suite.c -c $(TEST_FLAGS)
	$(CC) $(TEST)_suite.o $(TEST).a s21_decimal.a -o $(TEST) --coverage $(CFLAGS) $(TEST_FLAGS)
ifeq ($(UNAME), Linux)
	valgrind --leak-check=yes ./$(TEST)
else ifeq ($(UNAME), Darwin)
	leaks --atExit -- ./$(TEST)
endif
