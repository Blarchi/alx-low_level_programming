#include <stdio.h>

/**
 * main - prints
 *
 * Decription: prints the sum of all the multiples
 *
 * Return: 0
 */

int main(void)
{
int a, sum = 0;
for (a = 0; a < 1024; a++)
{
if  ((a % 3) == 0 || (a % 5) == 0)
sum += a;
}
printf("%d\n", sum);
return (0);
}
