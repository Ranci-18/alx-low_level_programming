#include "main.h"
/**
 *binary_to_uint - returns a decimal number from a given binary
 *@b: binary string
 *
 *
 *Return: decimal number or 0 if failed to convert
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int index;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		;
	}
	for (i--, index = 1; i >= 0; i--, index *= 2)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			decimal += index;
		}
	}
	return (decimal);
}

