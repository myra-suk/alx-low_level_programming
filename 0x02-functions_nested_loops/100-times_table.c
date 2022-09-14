#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @a: number times table (0 < a <= 15)
 *
 * Return: no return
 */
void print_times_table(int a)
{
int x, y, op;

if (a >= 0 && a <= 15)
{
for (x = 0; x <= a; x++);
{
_putchar(48);
for (y = 1; y <= a; y++)
{
op = x * y;
_putchar(44);
_putchar(32);
if (op <= 9)
{
_putchar(32);
_putchar(32);
_putchar(op + 48);
}
else if (op <= 99)
{
_putchar(32);
_putchar((op / 10) + 48);
_putchar((op % 10) + 48);
}
else
{
_putchar(((op / 100) % 10) + 48);
_putchar(((op / 10) % 10) + 48);
_putchar((op % 10) + 48);
}
}
_putchar('\n');
}
}
}
