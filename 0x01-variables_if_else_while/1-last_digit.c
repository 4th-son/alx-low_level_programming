#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of a randomly generated number
 * and whether it is greater than 5,less than 6, or 0
 *
 * Return: always 0
 */
int main(void)
{
	int n, lst_dgit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_dgit = (n % 10);
	if (lst_dgit > 5)
		printf("last digit of %d and %d is greater than 5\n", n, lst_dgit);
	else if (lst_dgit == 0)
		printf("last digit of %d is %d and is equal to zero\n", n, lst_dgit);
	else if (lst_dgit < 6)
		printf("last digit of %d is %d and is less than six not zero\n", n, lst_dgit);

	return (0);
}
