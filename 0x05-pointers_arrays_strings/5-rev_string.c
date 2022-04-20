#include "main.h"

/**
* rev_string - reverses a string.
* @s: the string to be reversed.
*/

void rev_string(char *s)
{
int length,b,c;
char v, z;
for (length = 0; s[length] != '\0'; length++)
{
}
b = length - 1;
c = 0;
while (b > c)
{
v = s[c];
z = s[b];
s[b] = z;
s[c] = v;
b--;
c++;
}
}
