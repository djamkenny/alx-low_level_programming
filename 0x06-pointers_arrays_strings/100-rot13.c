#include "main.h"
/**
 * rot13 - Capitalizes all words of a string.
 * @*: The string to be capitalized.
 * @str: parameters
 * Return: 0
 */
char *rot13(char *str)
{
	if (str)
	{
	for (char *p = str; *p; ++p)
	{
	char c = *p;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
		*p = ((c - base + 13) % 26) + base;
	}
	}
	}
	return (str);
}
