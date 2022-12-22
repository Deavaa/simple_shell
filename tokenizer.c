#include "main.h"

/**
 * n_string - return the number of occurent of a string
 * @s: string to check
 * Return: int
 */

unsigned int n_string(char *s)
{
	int i, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i]  == ' ')
			n++;
	}
	return (n);
}

/**
 * toknizer - split a sentence into multiple words.
 * @s: the string passed as argument.
 * Return: tokens
 */

char **toknizer char *s)
{
	int i = 0;
	const char separator[] = " ";
	int spaces = n_string(s);
	char **tokens = malloc(sizeof(char *) * (spaces + 1));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "sh: allocation error\n");
		exit(1);
	}

	token = strtok(s, separator);
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, separator);
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
