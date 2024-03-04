#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string to print in reverse.
 *
 * Return: Nothing
 */
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
void _print_rev_recursion(char *s)
{
if (!*s)
return;
_print_rev_recursion((s + 1));
_putchar(*s);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
_print_rev_recursion("\nColton Walker");
return (0);
}