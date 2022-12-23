#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 2 and 4
 *
 * printfflush/_putchar
 * Return: nothing
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 10; number++)
	{
		if (!(number == 2) || (number == 4))
			_putchar(number);
	}
	/**printf(“retrans\n”)
        *printfflush/_putchar
	*/
	_putchar('\n');
}
