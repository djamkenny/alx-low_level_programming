#include "main.h"

/**
 * print_square -  prints a square
 * @size: is the size of the square
 * Return: 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar("\n")
	}
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar("\n");
	}
}
