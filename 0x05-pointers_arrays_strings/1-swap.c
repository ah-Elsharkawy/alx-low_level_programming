#include "main.h"

/**
 * swap_int - swap the values of the two given integers
 * @a: an address to a value of type integer
 * @b: an address to a value of type integer
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
