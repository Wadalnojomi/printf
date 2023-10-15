#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @ch: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char ch)
{
	return (buffer(ch));
}
/**
 * buffer - Save the character in a buffer
 * @ch: Character
 *
 * Return: 1
 **/
int buffer(char ch)
{
	static char buffering[1024];
	static int i;

	if (ch == -1 || i == 1024)
	{
		write(1, buffering, i);
		i = 0;
	}
	if (ch != -1)
		buffering[i++] = ch;

	return (1);
}
