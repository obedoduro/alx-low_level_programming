#include "main.h"

/**
* _strncat - concetinate two strings.
* @dest: first string.
* @src: second string.
* @n: the number of bytes to use from src.
* Return: string des
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0, ja= 0;
while (dest[i] != '\0')
i++;
while (src[ja] != '\0' && n > ja)
{
dest[i] = src[ja];
ja++;
i++;
}
if (n > 0)
{
dest[i] = '\0';
}
return (dest);
}
