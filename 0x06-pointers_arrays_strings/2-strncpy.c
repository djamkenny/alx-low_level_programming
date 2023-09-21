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
	char _strncpy = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (_strncpy);
}
