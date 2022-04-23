#include "main.h"

/**
* _strncpy - copy src to dest.
* @dest: first string.
* @src: second string.
* @n: the number of bytes to use from src.
* Return: string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (n > j)
{
if (src[j] == '\0')
{
for (; j < n; k++)
{
dest[i] = '\0';
i++;
}
}
else
{
dest[i] = src[j];
j++;
i++;
}
}
return (dest);
}
