#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

/**
 * main - how to use the fucntion
 * @void: void
 * Return: return 0
 */

int main(void)
{
	unsigned long int num = 1024;  /* Example number */

	print_binary(num);
	_putchar('\n');  /* Print a newline character for formatting */

	return (0);
}

