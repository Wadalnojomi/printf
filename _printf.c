#include "main.h"
/**
 * _printf - recreates the printf funct
 * @format: format specifier
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	int counter = 0, c, num;
	const char *p, *s;
	char num_str[10];
	va_list args;

	va_start(args, format);
	for (p = format; *p; ++p)
	{
		if (*p != '%')
		{
			putchar(*p);
			++counter;
		}
		else
		{
			switch (*++p)
			{
				case 'c':
					{
						c = va_arg(args, int);
						putchar(c);
						++counter;
						break;
					}
				case 's':
					{
						s = va_arg(args, const char *);
						fputs(s, stdout);
						counter += strlen(s);
						break;
					}
				case '%':
					{
						putchar('%');
						++counter;
						break;
					}
				case 'i':
				case 'd':
					{
						num = va_arg(args, int);
						sprintf(num_str, "%d", num);
						counter += strlen(num_str);
						++counter;
						break;
					}
			}
		}
	}
	va_end(args);
	return (counter);
}
