#include <stdio.h>

/**
 * main - Prints the addition of the Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int n1, n2, fn;

n1 = 1;
n2 = 2;
printf("%ld, %ld", n1, n2);
for (i = 0; i < 48; i++)
{
fn = n1 + n2;
printf(", %ld", fn);
n1 = n2;
n2 = fn;
}
printf("\n");
return (0);
}
