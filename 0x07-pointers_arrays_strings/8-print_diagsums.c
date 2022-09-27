#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- Prints the sum of the two 
 * diagonals of  square matrix of integers.
 * @a: Input pointer.
 * @size: Size of the matrix.
 * Return: No return.
 */
void print_diagsums(int *a, int size)
{
int x, sum1 = 0, sum2 = 0;

for (x = 0; x < (size * size); x++)
{
if (x % (size + 1) == 0)
sum1 += *(a + x);
if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
sum2 += *(a + x);
}
printf("%d, %d\n", sum1, sum2);
}
