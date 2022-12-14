#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char za;

	for (za = 'a'; za <= 'z'; za++)
		_putchar(za);

	_putchar('\n');
}
