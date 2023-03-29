#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 * Return: integer 0, 1, -1 if s1 is equal
 * or greater or less than s2 respectively
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
i++;
return (s1[i] - s2[i]);
}
