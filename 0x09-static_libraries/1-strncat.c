#include "main.h"
/**
 * _strncat - concats two strings with n chars from the src string
 *
 * @dest: destination of concat
 * @src: the source string
 * @n: number of bytes used from src
 * Return: pointer to the first char of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
