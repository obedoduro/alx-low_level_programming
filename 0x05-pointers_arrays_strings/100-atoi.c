#include "main.h"

/**
* _atoi: converts a string into an integer.
* @s: the string to use.
* @a: the string to print as an integer
* Return: integer.
*/

int _atoi(char *s)
{
int b = 1, c = 0;
unsigned int a = 0;
while (!(s[c] <= '9' && s[c] >= '0') && s[c] != '\0')
{
if (s[c] == '-')
b *= -1;
c++;
}
while (s[c] <= '9' && (s[c] >= '0' && s[c] != '\0'))
{
a = (a * 10) + (s[c] - '0');
i++;
}
a *= b;
return (a);
}
