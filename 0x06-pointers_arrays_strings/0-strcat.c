#include "main.h"

/**
 * _strcat -  concatenates two strings
 * @dest: is a parameter
 * @src: is a parameter
 * Return: _strcat
 */
char *_strcat(char *dest, char *src)
{
	char *_strcat = dest;

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

	*dest = '\0';

	return (_strcat);
}
