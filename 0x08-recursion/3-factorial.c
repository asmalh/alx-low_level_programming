#include "main.h"
#include <stdio.h>
/**
 * factorial - desciption
 * @n: number to find the factorial for.
 *
 * Return: Factorial (INT)
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
int main(void)
{
    int n;

    n= factorial(1);
    printf("%d\n", n);
    n = factorial(5);
    printf("%d\n", n);
    n = factorial(10);
    printf("%d\n", n);
    n = factorial(-1024);
    printf("%d\n", n);
    return (0);
}