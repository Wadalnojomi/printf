#include "main.h"
/**
 * print_string - Print string
 * @args: args.
 * Return: String length.
 */
int print_string(va_list args)
{
	char *s;
	int s_len;

	p = va_arg(args, char*);
	s_len = print((s != NULL) ? s : "(null)");

	return (s_len);
}
