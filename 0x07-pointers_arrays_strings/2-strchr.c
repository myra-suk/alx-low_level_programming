#include "main.h"

/**
 * _strchr- Locates a character ina  string.
 * @s: string.
 * @c: character.
 * Return: The pointer to the first occurence of the character.
 */
char *_strchr(char *s, char c)
{
unsigned int m = 0;

for (; *(s + m) != '\0'; m++)
if (*(s + m) == c)
return (s + m);
if (*(s + m) == c)
return (s + m);
return ('\0');
}
