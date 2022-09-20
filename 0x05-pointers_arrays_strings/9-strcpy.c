#include "main.h"
#include <stdio.h>

/**
 * _strcpy- Copies the string pointed to by src,
 * including the terminatin null byte, to the
 * buffer pointed to by dest
 * @dest: destination.
 * @src: source.
 * Return: The pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
int counter = 0;

while (counter >= 0)
{
*(dest + counter) = *(src + counter);
if (*(src + counter) == '\0')
break;
counter++;
}
return (dest);
}
