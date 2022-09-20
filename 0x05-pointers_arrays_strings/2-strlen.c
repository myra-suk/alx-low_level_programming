#include "main.h"
#include <stdio.h>

/**
 * _strlen- Checks the program and returns the length of a string.
 * @s: Input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
int counter = 0;

while (*(s + counter) != '\0')
counter++;
return (counter);
}
