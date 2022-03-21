#include "main.h"
#include <stdio.h>

/**
 *print_array - Prints n elements of an array.
 *@a:The array of integers.
 *@n: Number of elements to be printed.
 */

void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
