#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
int i;
for (i = 0; i < 20; i++)
{
putchar((1 % 10) + '0');
if (i != 19)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
