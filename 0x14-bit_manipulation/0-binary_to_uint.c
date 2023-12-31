#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary can be converted through unsigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are coverted
 */

unsigned int binary_to_uint(const char *b)
{
        int a;
        unsigned int unit = 0;

        if (!b)
                return (0);
        for (a = 0; b[a]; a++)
        {
                if (b[a] < '0' || b[a] > '1')
                        return (0);
                unit = 2 * unit + (b[a] - '0');
        }
        return (unit);
}

