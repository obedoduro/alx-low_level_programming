#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: calculate string
* @accept: contains strings to match with s
* Return: the number of bytes from s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, t, p;
t = 0;
for (i = 0; s[i] != '\0'; i++)
{
p = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
t++;
p = 1;
}
}
if (p == 0)
{
return (t);
}
}
return (0);
}
