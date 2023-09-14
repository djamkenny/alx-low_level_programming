#include "main.h"

/**
 * print_most_numbers - prints the number but not 2 and 4
 *
 *Return Always 0
 */

void print_most_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			_putchar(i);
	}
}
