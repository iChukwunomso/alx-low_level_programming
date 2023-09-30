#include "main.h"

/**
 * binary_to_uint - converts the binary number to an unsigned integer
 *
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int deva = 0;

	if (!b)
		return (0);
	j = 0;
	while (b[j])
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		deva = 2 * deva + (b[j] - '0');
		j++;
	}
	return (deva);
}
