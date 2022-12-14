#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int ten;
	char za;

	for (ten = 0; ten <= 9; ten++)
	{
		for (za = 'a'; za <= 'z'; za++)
			_putchar(za);
		_putchar('\n');
	}
}
