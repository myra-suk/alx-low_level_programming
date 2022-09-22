#include "main.h"

/**
 * _strcat- Links and joins two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
int counter = 0, counter2 = 0;

while (*(dest + counter) != '\0')
{
counter++;
}

while (counter2 >= 0)
{
*(dest + counter) = *(src + counter2);
if (*(src + counter2) == '\0')
break;
counter++;
counter2++;
}
return (dest);
}
