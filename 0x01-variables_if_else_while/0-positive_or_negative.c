#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
<<<<<<< HEAD
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
=======
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				if (n > 0)
				{
					printf("%d is positive \n");
				}
				else if (n ==0)
				{
					printf("%d is zero \n");
				}
				else (n < 0)
				{
					printf("%d is negative \n");
				}
					return (0);
>>>>>>> d6f4d90f162ea216ee9496ed82e1746c525366c2
}