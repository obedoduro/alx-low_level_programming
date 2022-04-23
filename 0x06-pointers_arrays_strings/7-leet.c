#include "main.h"

/**
* leet - encodes a string into 1337.
* @en: string to encode.
* Return: string.
*/

char *leet(char *en)
{
int i = 0, j = 0;
char leet[] = {'4', '3', '1', '0', '7'};/** In order*/
char upper[] = {'A', 'E', 'L', 'O', 'T'};
char lowwer[] = {'a', 'e', 'l', 'o', 't'};
while (en[i] != '\0')
{
for (j = 0; j < 5; j++)
{
if (en[i] == lowwer[j] || en[i] == upper[j])
en[i] = leet[j];
}
i++;
}
return (en);
}
