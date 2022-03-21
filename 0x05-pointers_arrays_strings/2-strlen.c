#include "main.h"

/**
 *_strlen - Returns the length of a string.
 *@s: The string to get the length of.
 *
 *Return: int.
 */

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i += 1;
}
return (i);
}
