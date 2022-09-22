#include "main.h"

/**
 * leet- Encodes  string into 1337
 * @s: Input string
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
int counter = 0, x;
int low_letters[] = {97, 101, 111, 116, 108};
int upp_letters[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};

while (*(s + counter) != '\0')
{
for (x = 0; x < 5; x++)
{
if (*(s + counter) == low_letters[x] || *(s + counter) == upp_letters[x])
{
*(s + counter) = numbers[x];
break;
}
}
counter++;
}
return(s);
}
