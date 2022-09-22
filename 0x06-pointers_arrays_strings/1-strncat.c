#include "main.h"

/**
 * _strncat- Concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int counter = 0, counter2 = 0;

while (*(dest + counter) != '\0')
{
counter++;
}

while (counter2 < n)
{
*(dest + counter) = *(src + counter2);
if (*(src + counter2) == '\0')
break;
counter++;
counter2++;
}
return (dest);
}
