#include "main.h"

/**
* _isupper - check for digit
* @c: number to checked
* Return: 1 else return 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
