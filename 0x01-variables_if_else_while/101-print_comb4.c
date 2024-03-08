#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	int r, k, y;

	for (r = '0'; r < '9'; r++)
	{
		for (k = r + 1; k <= '9'; k++)
		{
			for (y = k + 1; y <= '9'; y++)
			{
				if ((k != r) != y)
				{
					putchar (r);
					putchar (k);
					putchar (y);
					if (r == '7' && y == '8')
						continue;
					putchar (',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}

