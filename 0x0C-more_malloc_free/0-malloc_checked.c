#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- Allocates memory
 * @b: Number of bytes
 * 
 * Return: Pointer to the allocated memory
 * If malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
char *x;

x = malloc(b);
if (x == NULL)
exit(98);
return(x);
}
