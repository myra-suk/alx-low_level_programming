#include "main.h"

/**
 * _memset- Fills memory with a constant byte.
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to the destination.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
*(s + x) = b;

return (s);
}
