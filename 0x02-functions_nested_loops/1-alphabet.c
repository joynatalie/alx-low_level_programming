#include <stdio.h>

/**
 *print_alphabet - Prints alphabet in lowercase.
 */

void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
}
