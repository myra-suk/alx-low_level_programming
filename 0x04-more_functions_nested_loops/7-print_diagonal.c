#include "main.h"

/**
 * print_diagonal- prints diagonal line n times
 * @n: nimner of times diagonal line is printed
 * Return: no return
 */
void print_Digonl(int n)
{
int x, y;

for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(' ');
}
_putchar(92);
if (x < (n-1))
_putchar('\n');
}
}
