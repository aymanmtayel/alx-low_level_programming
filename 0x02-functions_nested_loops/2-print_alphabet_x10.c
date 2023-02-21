#include "main.h"
/**
 *print_alphabet_x10 - print the alphabet in lower case
 *10 times
 *Return - void
 */

char l;
int i=0;
void print_alphabet_x10(void)
{
while (i<10){
for (l='a';l<='z';l++){
  _putchar(l);
 }
_putchar('\n');
 i++;
  }
}
