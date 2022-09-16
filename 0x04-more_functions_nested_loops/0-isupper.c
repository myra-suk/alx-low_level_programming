#include "main.h"

/**
 * _isupper- checks if parmeter is an uppercase character.
 * @c: input character.
 * Return: 1 if it is an uppercase character, 0 for any otehr case
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
