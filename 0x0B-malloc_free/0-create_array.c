#include "main.h"
#include <stdlib.h>

/**
 *  create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *xy;
	unsigned int m;

	if (size == 0)
		return (NULL);

	xy = malloc(sizeof(c) * size);

	if (xy == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		xy[m] = c;

	return (xy);
}
