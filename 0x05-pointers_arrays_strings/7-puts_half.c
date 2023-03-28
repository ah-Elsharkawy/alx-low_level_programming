#include "main.h"
/**
 *puts_half - print the second half of the string
 *@str: take a string
 */
void puts_half(char *str)
{
	int i = _strlen(str);

i++;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
