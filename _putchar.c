#include <unistd.h>
int _putchar(char c)
{
    static char buffer[1024];
    static int pos = 0;

    if (pos == 1024) {
        write(1, buffer, 1024);
        pos = 0;
    }

    buffer[pos] = c;
    pos++;

    return 1;
}
