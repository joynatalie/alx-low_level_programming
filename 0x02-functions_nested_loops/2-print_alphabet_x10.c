#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet.
 */

void print_alphabet_x10(void)
{
  char letter;

  for (letter = 'a'; letter <= 'z'; letter++)
    putchar(letter);
  putchar('\n');
}
