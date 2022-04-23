#include "main.h"

/**
* string_toupper -  all lowercase letters of a string to uppercase.
* @a: string to change.
* Return: a.
*/

char *string_toupper(char *a)
{
int i = 0;
while (a[i] != '\0')
{
if (a[i] > 96 && a[i] < 123)
{
a[i] -= 32;
}
i++;
}
return (a);
}
