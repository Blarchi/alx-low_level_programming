#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	int a, n;

	for (a = 0; a <= 98; a++)
	{
		for (n = a + 1; n <= 99; n++)
		{
			putchar ((a / 10) + '0');
			putchar ((a % 10) + '0');
			putchar (' ');
			putchar ((n / 10) + '0');
			putchar ((n % 10) + '0');
			if (a == 98 && n == 99)
				continue;
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
