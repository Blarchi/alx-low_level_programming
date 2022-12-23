#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_line - draws a straight line in the terminal
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar (95);
		}

		_putchar('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
