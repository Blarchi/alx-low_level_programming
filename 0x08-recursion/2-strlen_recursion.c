#include "main.h"

/**
 * _strlen_recursion - check description
 * Decsription: function that returns the length
 * of a string
 * @s:string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(++s));
}
