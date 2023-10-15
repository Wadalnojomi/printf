#include "main.h"
/**
 * print_char - print char.
 * @args: va_list.
 * Return: 1
 */
int print_char(va_list args)
{
	int ch;

	ch = va_arg(args, int);
	_putchar(ch);

	return (1);
}
