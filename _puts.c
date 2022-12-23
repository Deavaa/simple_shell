#include "main.h"

/**
 * putsfun - prints a strin
 * @str: pointer to the string to print
 * Return: void
 */

void putsfun(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
