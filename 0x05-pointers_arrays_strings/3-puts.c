#include "main.h"

/**
 * _puts - prints a string with a new line
 * @str: the address to the string to be printed
*/

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
