#include <stdio.h>
/**
 * main Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
char c;
int i;
long int lngi;
long long int lx2_i;
float f;
printf("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s) \n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s) \n", (unsigned long)sizeof(lngi));
printf("Size of a long long int: %lu byte(s) \n", (unsigned long)sizeof(lx2_i));
printf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(f));
return (0);
}
