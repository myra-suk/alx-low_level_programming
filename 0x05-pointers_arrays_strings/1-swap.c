#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: first integer.
 * @b: second integer.
 * Retuen: No return.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
