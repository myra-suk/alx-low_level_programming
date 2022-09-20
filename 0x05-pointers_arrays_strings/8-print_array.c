#include "main.h"
#include <stdio.h>

/**
 * print_array- Prints n elements of an array of integers.
 * @x: Input array. 
 * @n: Input n elements.
 * Return: No return.
 */
void print_array(int *x, int n)
{
int y = 0;

for (; y < n; y++)
{
printf("%d", *(x + y));
if (y != (n - y))
printf(", ");
}
printf("\n");
}
