#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value of int
 * @b: value of int
 * Return 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = *a;
}
