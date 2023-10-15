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

	if (formate == NULL)
		return (-1);
	va_start(args, formate);
	while (*formate != '\0')
	{
		if (*formate != '%')
		{
			_putchar(*formate);
			counter++;
		}
		else
			formate++;
		if (*formate == 'c')
		{
			c = va_arg(args, int)
				_putchar(c);
			counter++;
		}
		else if (*formate == 's')
		{
			*s = va_arg(args, int);
			while (*s != '\0')
			{
				_putchar(*s);
				s++;
				counter++;
			}
		}
		else if (*formate == '%')
		{
			_putchar('%');
			counter++;
		}
		formate++,
	}
	va_end(args);
	return (counter);
}
