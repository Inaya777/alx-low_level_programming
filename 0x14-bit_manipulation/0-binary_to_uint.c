#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - fct
 * @b: b str
 * Return: the decimal number of given binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int bit;
	int iter;

	result = 0;
	iter = 0;
	if (!b)
		return (0);
	while (b[iter])
	{
		if (b[iter] != '0' && b[iter] != '1')
			return (0);
		bit = b[iter] - 48;
		result = (result << 1) + bit;
		iter++;
	}
	return (result);
}
