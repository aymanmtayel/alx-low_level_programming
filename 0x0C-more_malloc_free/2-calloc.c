#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *m_sp;

if (nmemb == 0 || size == 0)
return (NULL);

m_sp = malloc(nmemb * size);
if (m_sp == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
*(m_sp + i) = 0;

return (m_sp);
}
