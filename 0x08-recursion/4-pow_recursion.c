#include "main.h"

/**
 * _pow_recursion- Returns the value of x to the power of y.
 * @x: Base.
 * @y: Exponent.
 * Return: Value of the exponentation.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if ( y == 0)
return (0);
else
return (x * _pow_recursion(x, y - 1));
}
