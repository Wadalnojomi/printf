#include "main.h"
/**
 * _printf - printf like function
 * @formate:  is a character string
 * Return: the number of characters printed
 */
int _printf(char *formate, ...)
{
	int counter = 0;
	char c, *s;
	va_list args;

	va_start(args, int);
	while (*format = '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			counter++;
		}
		else
			format++;
		if (*format == 'c')
		{
			c = va_ arg(args, int)
				_putchar c;
			counter++;
		}
		else if (*format == 's')
		{
			*s = va_arg(args, int)
			while (*s != '\0')
			{
				_putchar(*s);
				s++;
				counter++;
			}
		}
		else if (*format == '%')
		{
			_putchar('%');
			counter++;
		}
		format++,
	}
	va_end(args);
	return (counter);
}
