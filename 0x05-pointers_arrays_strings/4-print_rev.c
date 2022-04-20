#include "main.h"

/**
* print_rev - prints a string, in reverse.
* @s: the string to print in reverse.
*/

void print_rev(char *a)
{
int b = 0;
int length;
for (length = 0; a[length] != '\0'; length++)
{
}
for (b = length - 1; b >= 0; b--)
{
_putchar(a[b]);
}
_putchar('\n');
}
