#include "main.h"

/**
 * _strncpy - copies a strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: _strncpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *d = dest;
	const char *s = src;

	while (n > 0 && *s)
	{
		*d++ = *s++;
		n--;
	}

	while (n > 0)
	{
		*d++ = '\0';
		n--;
	}
	return (dest);
}
