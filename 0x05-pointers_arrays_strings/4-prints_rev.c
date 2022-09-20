#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: Input string.
 * Return: No return
 */
void print_rev(char *s)
{
int counter = 0;

while (counter >= 0)
{
if(s[counter] == '\0')
break;
counter++;
}

for (counter--; counter >= 0; counter--)
_putchar(s[counter]);
_putchar('\n');
}
