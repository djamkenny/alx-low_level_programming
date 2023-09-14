#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	for (int i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	return (0);
}

