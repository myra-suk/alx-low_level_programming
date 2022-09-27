#include "main.h"

/**
 * _strpbrk- Searches a string for any of a set of bytes.
 * @s: First string.
 * @accept: Second string.
 * Return: A pointer to the byte that matches one of the 
 * bytes in accept, or NULL if no matching byte is found
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int x, y;

for (x = 0; *(s + x) != '\0'; x++)
{
for (y = 0; *(accept + y) != '\0'; y++)
{
if (*(s + x) == *(accept + y))
return (s + x);
}
}
return ('\0');
}
