#include "main.h"

/**
 *_isalpha - check for alphabets
 *@c: character to be checked
 *Return: 0 if not alphabet and 1 if alhpabet
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
