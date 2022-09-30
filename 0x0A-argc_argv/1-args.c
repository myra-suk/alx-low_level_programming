#include <stdio.h>

/**
 * main- Prints the number of arguments passed into it.
 * @argc: Number of command line arguments.
 * @argv: Array that ontains the program commnd line arguments.
 * Return: 0- Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
