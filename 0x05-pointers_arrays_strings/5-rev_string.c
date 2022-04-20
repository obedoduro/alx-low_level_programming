#include "main.h"

/**
* rev_string - reverses a string.
* @a: the string to be reversed.
*/

void rev_string(char *a)
{
int length,b,c;
char v, z;
for (length = 0; a[length] != '\0'; length++)
{
}
b = length - 1;
c = 0;
while (b > c)
{
v = a[c];
z = a[b];
a[b] = z;
a[c] = v;
b--;
c++;
}
}
