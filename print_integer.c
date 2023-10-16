#include "main.h"
/**
 * print_integer - Print a number in base 10
 * @list: Number to print in base 10
 *
 * Return: Length of th numbers in decimal
 **/
int print_integer(va_list args)
{
	char p_buff[60];
	int size, num;

	num = va_arg(args, int);
	sprintf(p_buff, "%d", num);
	size = printf("%d", (p_buff != NULL) ? p_buff : "NULL");

	return size;
}
