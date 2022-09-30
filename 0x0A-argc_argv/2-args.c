#include <stdio.h>

/**
 * main- Prints all argumenets received.
 * @argc: Number of command line arguments.
 * @argv: Array that contains the program commnd line rguments.
 * Return: 0- Success.
 */
int main(int argc, char *argv[])
{
int x;

for (x = 0; x < argc; x++)
printf("%s\n", argv[x]);
return (0);
}
