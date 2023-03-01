#include "main.h"

/**
 *cap_string - function to captalize the first letter of every word
 *@s: string
 *Return: the string capitalized
 */

char *cap_string(char *s)
{
int a = 0, i;
int n_sep = 13;
char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

while (s[a])
{
i = 0;
while (i < n_sep)
{
if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
s[a] -= 32;
i++;
}

a++;
}

return (s);
}
