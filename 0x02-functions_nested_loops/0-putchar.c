#include <stdio.h>

/**
 *main - Prints _putchar and a new line.
 *
 *Return: 0
 */

int main(void)
{
  int i;
  char P[] = "_putchar";

  for (i = 0; i < 9; i++)
    {
      putchar(P[i]);
    }
  putchar('\n');
  return (0);
}
