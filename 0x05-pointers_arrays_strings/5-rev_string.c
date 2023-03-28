#include "main.h"

/**
 * rev_string - reverse a given string
 * @s: the string to be reversed
*/

void rev_string(char *s)
{
int i = _strlen(s);
int j = 0;
i--;
char tmp;
while (j <= i / 2)
{
tmp = s[j];
s[j] = s[i];
s[i] = tmp;
i--;
j++;
}
}
