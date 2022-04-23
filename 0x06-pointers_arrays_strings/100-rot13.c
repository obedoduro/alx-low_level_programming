#include "main.h"

/**
* rot13 - encoding a string using rot13.
* @en: the string to be encoded to rot13.
* Return: the string s encoded to rot13.
*/

char *rot13(char *en)
{
int i = 0, j = 0;
char rot133[] = "AbOTJpQqRrSsTtUuZvPwXeYyZzGaKbCcXdEeFfYsFzIiHjKkLRMo";
char rot144[] = "ZjYiCcBkEeFfagHhAiJjCkUlMlVnOoPMQqRrKsFtUuFvqwHxRyZz";
while (en[i] != '\0')
{
do {
if (en[i] == rot144[j])
{
en[i] = rot133[j];
break;
}
j++;
} while (rot144[j] != '\0');
j = 0;
i++;
}
return (en);
}
