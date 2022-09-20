#include "main.h"

/**
 * _atoi- Converts a string to an integer.
 * @s: Input string.
 * Return: Integer
 */
int _atoi(char *s)
{
unsigned int counter = 0, size = 0, oi = 0, pn = 1, m = 1, i;

while (*(s + counter) != '\0')
{
if (size > 0 && (*(s + counter) < '0' || *(s + counter) > '9'))
break;

if (*(s + counter) == '-')
pn *= -1;

if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
{
if (size > 0)
m *= 10;
size++;
}
counter++;
}

for (i = counter - size; i < counter; i++)
{
oi = oi + ((*(s + i) - 48) * m);
m /= 10;
}
return (oi * pn);
}
