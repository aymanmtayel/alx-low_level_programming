#include "main.h"

/**
 * _isupper - checks letters for uppercase
 *@c: charcater to be checked
 *Return: 1 if upper case , 0 if not
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
