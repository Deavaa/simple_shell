#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @ch: The character to print
 * Return: On success 1.
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}


