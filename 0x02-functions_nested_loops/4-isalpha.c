#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character
 * Return: 1 if c is a letter, lowercase or uppercase, 0 if not
 */
int _isalpha(int c)
{
	char za;

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

			return (1);
		else
			return (0);
}

