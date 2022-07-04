#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point for our program using betty linter
 * Return: Always 1 (Success)
 */
int main(void)

{
/* Note: You are not allowed to use either printf or puts*/
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, quote, sizeof(quote) - 1);
return (1);
}
