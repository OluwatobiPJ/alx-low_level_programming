#include <stdio.h>
#include <unistd.h>
/**
 * Main - Entry point for our program using betty linter
 *
 * Description: 'art is useful'
 * Return: 1 Always (Success)
 *
 */
int main(void)
{
/* Note: You are not allowed to use either printf or puts*/
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, quote, sizeof(quote) - 1);
return (1);
}
