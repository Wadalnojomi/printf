#include "main.h"
#include <stdio.h>
/**
 * _print - printf like function
 * @formate:  is a character string
 * Return: the number of characters printed
 */
int _printf(char *formate, ...)
{
	int counter = 0;
	char c, *s;
	va_list args;

	va_start(args, int);
	if (*format == NULL )
		return (-1);
	while (*format = '\0')
	{
		if (*format != '%')
		{
			putchar(*format);
			counter++;
		}
		else
			format++;
		if (*format == 'c')
		{
			c = va_ arg(args, int)
				putchar c;
			counter++;
		}
		else if (*format == 's')
		{
			*s = va_arg(args, int)
			while (*s != '\0')
			{
				putchar(*s);
				s++;
				counter++;
			}
		}
		else if (*format == '%')
		{
			putchar('%');
			counter++;
		}
		format++,
	}
	va_end(args);
	return (counter);
}
