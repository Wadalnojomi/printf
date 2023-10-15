#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * struct structprint - struct specifier
 * @q: method to translate data
 * @u: print function
 * Return: an integer
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;
int _putchar(char ch);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);


#endif

