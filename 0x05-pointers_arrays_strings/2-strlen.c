#include "main.h"

/**
* _strlen - calculates the length of a string.
* @s: the string to calculate it's length.
* Return: length of a string in a number.
*/

int _strlen(char *s)
{
int i;
int lenh = 0;
for (i = 0; s[i] != '\0'; i++)
{
lenh++;
}
return (lenh);
}
