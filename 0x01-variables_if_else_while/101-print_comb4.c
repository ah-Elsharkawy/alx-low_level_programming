#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1 = 0;
while (num1 < 10)
{
int num2 = 0;
while (num2 < 10)
{
int num3 = 0;
while (num3 < 10)
{
if (num1 < num2 && num2 < num3)
{
putchar(num1 + '0');
putchar(num2 + '0');
putchar(num3 + '0');
if (num3 <= 10 && (num1 + num2 + num3) < 24)
{
putchar(',');
putchar(' ');
}
}
num3++;
}
num2++;
}
num1++;
}

putchar('\n');
return (0);
}
