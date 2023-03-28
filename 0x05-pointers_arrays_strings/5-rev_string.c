#include "main.h"

/**
 * rev_string - reverse a given string
 * @s: the string to be reversed
*/

void rev_string(char *s)
{
int i = 0;
int j = 0;
char tmp;

while (s[i] != '\0')
{
i++;
}
i--;
while (i > j)
{
tmp = s[j];
s[j] = s[i];
s[i] = tmp;
i--;
j++;
}
}
