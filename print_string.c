#include "main.h"
/**
 * print_string - Print string
 * @args: args.
 * Return: String length.
 */
int print_string(va_list args)
{
	char *s, *null_string;
	int s_len, i;

	s = va_arg(args, char*);
	if (s != NULL)
	{
		s_len = strlen(s);
		for (i = 0; i < s_len; i++)
			_putchar(s[i]);
	}
	else
	{
		null_string = ("(null)");
		s_len = strlen(null_string);
		for (i = 0; i < s_len; i++)
			_putchar(null_string[i]);
	}

	return (s_len);
}
