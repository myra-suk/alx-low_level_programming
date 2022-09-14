#include <stdio.h>

/**
 * print_to_98 - Prints ll numbers
 * from input number to 98
 *
 * @m: input number
 *
 * Return: no return
 */
void print_to_98(int m)
{
if ( m > 98)
{
for (; m> 98; m--)
{
printf("%d, ", m);
}
}
else if (m < 98)
{
for (; m < 98; m++)
{
printf("%d, ", m);
}
}
printf("%d\n", m);
}