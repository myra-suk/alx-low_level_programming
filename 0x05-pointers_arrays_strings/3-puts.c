#include "main.h"

/**
 * _puts- Prints a string and a new line after.
 * @str: Input string
 * Return: No return
 */
void _puts(char *str)
{
int counter = 0;

while (counter >= 0)
{
if (str[counter] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[counter]);
counter++;
}
}
