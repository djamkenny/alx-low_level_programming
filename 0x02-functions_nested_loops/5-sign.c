#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 1 else return 0.
 */

int print_sign(int n)
{
	
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
