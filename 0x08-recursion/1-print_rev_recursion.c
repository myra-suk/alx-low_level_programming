#include "main.h"

/**
 * _print_rev_recursion- Prints a string in reverse.
 * @s: String.
 * Return: No Return
 */
void _print_rev_recusrion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
