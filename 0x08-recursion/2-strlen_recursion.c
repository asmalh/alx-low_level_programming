#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *  _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
  {
  if (*s)
  return (1 + _strlen_recursion((s + 1)));
  return (0);
 }
 
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
