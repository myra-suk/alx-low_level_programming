#include "main.h"

/**
 * rev_string - Reverses the order of the input string.
 * @s: Input string.
 * Retrun: No return
 */
void rev_string(char *s)
{
int counter = 0, x, y;
char *str, temp;

while (counter >= 0)
{
if (s[counter] == '\0')
break;
counter++;
}
str = s;

for (x = 0; x < (counter - 1); x++)
{
for (y = x + 1; y > 0; y--)
{
temp = *(str + y);
*(str + y) = *(str + (y - 1));
*(str + (y - 1)) = temp;
}
}
}
