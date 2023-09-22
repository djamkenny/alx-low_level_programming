#include "main.h"

/**
 *  _strcmp - compares two strings
 *  @s1: paramter
 *  @s2: parameter
 *  Return: _strcmp
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
	if (*s1 == '\0')
	return (0);
	s1++;
	s2++;
	}
	return ((int)((unsigned char)*s1 - (unsigned char)*s2));
	return (_strcmp);
}
