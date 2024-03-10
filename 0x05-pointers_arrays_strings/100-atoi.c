#include "main.h"

/**
 * _atoi - check description
 * Description: convert a string to an integer
 * @s:input
 * Return: 0
 */

int _atoi(char *s)
{
int i = 1;
unsigned int n = 0;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
n = n * 10 + (*s - '0');
else if (n > 0)
break;
} while (*s++);
return (n *i);
}
