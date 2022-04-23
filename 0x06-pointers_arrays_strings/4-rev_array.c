#include "main.h"

/**
* reverse_array - reverse an array.
* @a: array.
* @n: array's length.
*/

void reverse_array(int *a, int n)
{
int i, j, rev;
j = n - 1;
for (i = 0; i < n / 2; i++)
{
rev = a[i];
a[i] = a[j];
a[j] = rev;
j--;
}
}
