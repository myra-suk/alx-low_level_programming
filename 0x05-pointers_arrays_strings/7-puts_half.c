#include "main.h"

/**
 * puts_half- Prints half of a string.
 * @str: Input string
 * Return: No string
 */
void puts_half(char *str)
{
int counter = 0, x;

while (counter >= 0)
{
if (str[counter] == '\0')
break;
counter++;
}

if (counter % 2 == 1)
x = counter / 2;
else
x = (counter - 1) / 2;

for (x++; x < counter; x++)
_putchar(str[x]);
_putchar('\n');
}
