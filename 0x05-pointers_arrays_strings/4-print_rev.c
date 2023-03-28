#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the address of the first char of the string
*/

void print_rev(char *s)
{
int i = _strlen(s);
i--;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
}
