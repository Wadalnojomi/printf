#include "main.h"
/**
 * print_string - Print string
 * @args: args list.
 *
 * Return: String length.
 */
int print_string(va_list args)
{
	char *p;
	int p_len;

	p = va_arg(args, char*);
	p_len = printf((p != NULL) ? p : "(null)");

	return (p_len);
}
