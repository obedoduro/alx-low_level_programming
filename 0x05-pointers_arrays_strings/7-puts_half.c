#include "main.h"

/**
* puts_half - prints the second half of a string.
* @str: string to use.
*/

void puts_half(char *str)
{
int length, a, b;
for (length = 0; str[length] != '\0'; length++)
{
}
a = (length - 1) / 2;
for (b = a + 1; str[b] != '\0'; b++)
{
_putchar(str[b]);
}
_putchar('\n');
}
