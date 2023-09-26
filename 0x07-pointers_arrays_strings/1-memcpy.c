#include "main.h"
/**
* _memcpy - Entry point
* @dest: input
* @src: input
* @n: input
* Return: the original destination pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (original_dest);
}
