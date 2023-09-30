#include "main.h"

/**
 * print_binary - this will print the binary equivalent of a decimal no
 *
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)
{
	int j, counts = 0;
	unsigned long int current;

	j = 63;

	while (j >= 0)
	{
		current = n >> j;
		if (current & 1)
		{
			_putchar('1');
			counts++;
		}
		else if (counts)
		{
			_putchar('0');
		}
		j--;
	}
}
