#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the address of the first char of the string
*/

void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
