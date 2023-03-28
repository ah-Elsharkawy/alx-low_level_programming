#include "main.h"

/**
 * _strlen - returns the length of the given string
 * @s: address to the first char of a string
 * Return: length of the string
*/

int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0';)
{
i++;
}
return (i);
}
