#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...)
{
	int counter = 0, c;
	const char *p, *s;
	va_list args;

	va_start(args, format);
	for (p = format; *p; ++p) {
		if (*p != '%') {
            putchar(*p);
            ++counter;
        } else {
            switch (*++p) {
                case 'c': {
                    c = va_arg(args, int);
                    putchar(c);
                    ++counter;
                    break;
                }
                case 's': {
                    s = va_arg(args, const char *);
                    fputs(s, stdout);
                    counter += strlen(s);
                    break;
                }
                case '%': {
                    putchar('%');
                    ++counter;
                    break;
                }
            }
        }
    }
    va_end(args);
    return counter;
}

