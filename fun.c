/**
 * trlen - length of a string
 * @s: string pinter
 * Return: nothing
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy -  copies the string pointed 
 * @dest: string
 * @src:  string
 * Return: Pointer dest
 */

char *_strcpy(char *dest, const char *src)
{
		int i = -1;

		do {
			i++;
			dest[i] = src[i];
		} while (src[i] != '\0');
		return (dest);
}
