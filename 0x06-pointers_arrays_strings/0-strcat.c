#include "main.h"
<<<<<<< HEAD

/**
* _strcat - concatenates two strings.
* @dest: first string.
* @src: second string.
* Return: dest string.
*/

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
=======
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
>>>>>>> 2f391b1629e9c010903d45cc4d22f64c36cc12d6
}
