#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @m: input number of integer value
 *
 * Return: last digit.
 */
int print_last_digit(int m)
{
int s;

s = m % 10;
if (s < 0)
{
_putchar(-s + 48);
return (s);
}
else
{
_putchar(s + 48);
return (s);
}
}
