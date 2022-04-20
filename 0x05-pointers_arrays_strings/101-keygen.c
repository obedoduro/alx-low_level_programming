#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
* main - print password.
* Return: 0.
*/

int main(void)
{
int ascii = 2772, i = 0, j, guess;
char password[78];
time_t t;
srand((int) time(&t));
while (ascii > 200)
{
guess = rand() % 200;
password[i] = guess;
ascii -= guess;
i++;
}
if (ascii > 0)
password[i] = ascii;
else
{
i--;
}
for (j = 0; j <= i; j++)
{
printf("%c", password[j]);
}
return (0);
}
