#include "main.h"

/**
 *swap_int - Swaps the values of 2 integers.
 *@a: First integer.
 *@b: Second integer.
 */

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
