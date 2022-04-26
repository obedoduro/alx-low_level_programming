#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix 
* @a: square matrix of which we print the sum of diagonals
* @size: size of the matrix
*/
void print_diagsums(int *a, int size)
{
int i;
unsigned int b, c;
b = 0;
c = 0;
for (i = 0; i < size; i++)
{
b += a[(size * i) + i];
c += a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", b, c);
}
