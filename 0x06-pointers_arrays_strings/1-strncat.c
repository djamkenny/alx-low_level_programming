#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: _strncat
 */
char *_strncat(char *dest, char *src, int n)
{
	char *_strncat = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (_strncat);
}
