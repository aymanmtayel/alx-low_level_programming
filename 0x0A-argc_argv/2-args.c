#include <stdio.h>
/**
 *main - prints all arguments it receives.
 *@argc: arguments count.
 *@argv: arguments vector array.
 *Return: zero.
 */

int main(int argc, char *argv[])
{
int count;

printf("%s\n", argv[0]);

if (argc > 1)
{
for (count = 1; count < argc; count++)
{
printf("%s\n", argv[count]);
}
}
return (0);
}
