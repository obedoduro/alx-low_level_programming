#include "main.h"

/**
* print_diagonal - draw a diagonal line
* @n: number of times the character \ should be outputed
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
} else
{
int a, v;
for (a = 0; a < n; a++)
{
for (v = 0; v < n; v++)
{
if (v == i)
_putchar('\\');
else if (j < i)
_putchar(' ');
}
_putchar('\n');
}
}
}
}
