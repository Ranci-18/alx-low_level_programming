#include "main.h"
#include <stdio.h>

/**
 *jack_bauer - prints every minute of the day
 *
 *
 *
 *Returns: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hr;

	for (hr = 0; hr < 24; hr++)
		{
		int min;
		for (min = 0; min < 60; min++)
			{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
			}
		}

}
