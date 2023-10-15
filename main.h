#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#define OUTPUT_BUF_SIZE
#define NULL_STRING "(null)"
/**
 * struct structprint - struct specifier
 * @q: method to translate data
 * @u: print function
 * Return: an integer
*/
/* print_functions.c_module */


typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;
int _putchar(char ch);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int binary(int num);
int octal(int num);

#endif /* MAIN_H */
