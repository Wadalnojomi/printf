#include "main.h"
/**
* _printf - printf like function
* @format:  is a character string
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			counter++;
		}
		else
		{
			format++;
			if (*format == '\0')
			break;
		if (*format == 'c')
		{
			char c = va_arg(args, int);
				write(1, &c, 1);
			counter++;
		}
		else if (*format == 's')
		{
		char *str = va_arg(args, char*);
		int str_len = 0;
			while (str[str_len] != '\0')
			{
				str_len++;
				write(1, str, str_len);
				counter += str_len;
			}
		}
		else if (*format == '%')
		{
				write(1, format, 1);
			counter++;
		}
		}
		format++;
	}
	va_end(args);
	return (counter);
}
