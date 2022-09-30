#include <stdio.h>
#include <stdlib.h>

/**
 * min- Multiplies two numbers.
 * @argc: Number of commnd line arguments.
 * @argv: Array that contains the program commnd line rguments.
 * Return: 0- Success
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
