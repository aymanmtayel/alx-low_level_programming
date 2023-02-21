#include "main.h"
/**
 *_islower - check for c if lower case
 *@c: the character checked
 *
 *Return: 1 if pass for lower case or 0 for upper
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
