#include "main.h"

/**
 *leet - function that changes some litters into digits
 *@s: string with the letter to be changed
 *Return: the changed string
 */

char *leet(char *s)
{
int i = 0, j = 0, k = 5;
char l[5] = {'A', 'E', 'O', 'T', 'L'};
char n[5] = {'4', '3', '0', '7', '1'};

while (s[i])
{
j = 0;

while (j < k)
{
if (s[i] == l[j] || s[i] - 32 == l[j])
{
s[i] = n[j];
}
j++;
}
i++;
}
return (s);
}
