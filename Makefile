all: s21_cat
s21_cat:
	gcc functions/*.c s21_cat.c -Wall -Werror -Wextra -std=c11 -o s21_cat

clean:
	rm -rf s21_cat
