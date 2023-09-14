#include "main.h"

/**
 * main -  prints the numbers from 1 to 100
 *
 * Return: always 0
 */

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i / 3 == 0)
		{
			_putchar('fizz');
		}
		else if (i / 5 == 0)
		{
			_putchar('Buzz');
		}
		else if (i / 3 == 0 && i / 5 == 0)
		{
			_putchar('FizzBuzz');
		}
		else
		{
			_putchar(i);
		}
	}
	return (0);
}


