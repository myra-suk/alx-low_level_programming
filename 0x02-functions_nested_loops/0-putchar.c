#include <_putchar.h>

/**
* main - Prints _printchar as a message
*
* Retuen: Always 0 (Success)
*/
int main(void)
{
char *ms = "_printchar";

while (*ms)
{
_putchar(*ms);
ms++;
}
_putchar('\n');

return (0);
}
