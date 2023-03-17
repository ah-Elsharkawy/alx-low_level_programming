#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num++ + '0');
}
while (num < 16)
{
putchar(num++ + 87);
}
putchar('\n');
return (0);
}
