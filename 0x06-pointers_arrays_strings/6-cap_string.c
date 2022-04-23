#include "main.h"

/**
* cap_string - capitalizes all words of a string.
* @s: string to use.
* Return: string.
*/

char *cap_string(char *cap)
{
int i = 1, j, k;
char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};
if (cap[0] > 96 && cap[0] < 123)
cap[0] -= 32;
while (cap[i] != '\0')
{
if (cap[i] > 96 && cap[i] < 123)
{
j = 0;
k = 0;
while (k == 0 && j < 13)
{
if (cap[i - 1] == a[j])
{
k = 1;
}
j++;
}
if (k == 1)
{
cap[i] -= 32;
}
}
i++;
}
return (cap);
}
