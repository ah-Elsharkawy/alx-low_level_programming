#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
int main(void)
{
char word[8] = "_putchar";
for (int i = 0; i < 8; i++)
{
putchar(word[i]);
}
putchar('\n');
return (0);
}
