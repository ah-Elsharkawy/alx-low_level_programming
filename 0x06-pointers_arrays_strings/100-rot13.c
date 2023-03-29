#include "main.h"
#include <stdio.h>
/**
 * rot13 - encrypts code
 * @s: string to encrypt
 * Return: the encrypted string
 */
char *rot13(char *s)
{
	int i;
	int j;
	

	for (i = 0; s[i] != '\0'; i++)
	{
        if (s[i] >= 65 && s[i] <= 77 || s[i] >= 97 && s[i] <= 109)
        {
            s[i] += 13;
        }
        else
        {
            s[i] -= 13;
        }
        
	}
	return (s);
}

int main()
{
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    rot13(str);
    printf("%s\n", str);
}