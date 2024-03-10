#include "main.h"

/**
 * print_times_table - Prints times table of the input,
 * starting with 0.
 * @r: The value of the times table to be printed.
 */

void print_times_table(int r)

{
	int num, mul, pro;
	if (r >= 0 && r <= 15)
	{
		for (num = 0; num <= r; num++)
		{
			_putchar('0');
			for (mul = 1; mul <= r; mul++)
			{
				_putchar(',');
				_putchar(' ');
				pro = num * mul;
				if (pro <= 99)
					_putchar(' ');
				if (pro <= 9)
				_putchar(' ');
				if (pro >= 100)
				{
					_putchar((pro / 100) + '0');
					_putchar(((pro /10)) % 10 + '0');
				}
				else if (pro <= 99 && pro >= 10)
				{
					_putchar((pro / 10) + '0');
				}
				_putchar((pro / 10) + '0');
			}
			_putchar('\n');
		}
	}
}
