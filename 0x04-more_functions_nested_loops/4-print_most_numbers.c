#include "main.h"

/**
 * print_most_numbers - prints the number but not 2 and 4
 * Description: prints the numbers except 2 and 4
 * Return: 0 to 9
 */

void print_most_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
