#include "main.h"
/**
 * print_integer - Print a number in base 10
 * @list: Number to print in base 10
 *
 * Return: Length of th numbers in decimal
 **/
int print_integer(va_list args)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(args, int), 10);

	size = printf((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
