#include <stdio.h>

/**
 * main - main block
 * description: use 'putchar' func to print alphabets from a to z
 * return: 0
 */


int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
