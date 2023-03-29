#include "main.h"

/**
 * _strncpy - copies n chars of src string to the dest string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of chars to copy
 * Return: a pointer to the dest array of chars
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
