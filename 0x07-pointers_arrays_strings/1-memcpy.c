#include "main.h"

/**
 * _memcpy- Copies the memory area.
 * @dest: Destination memory area.
 * @src: Source memory area.
 * @n: Bytes filled.
 * Return: the pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int y;

for (y = 0; y < n; y++)
*(dest + y) = *(src + y);

return (dest);
}
