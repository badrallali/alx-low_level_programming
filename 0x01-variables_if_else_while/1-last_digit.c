#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* Description: 'check for number if it is positive or negative'
* Return: always 0 (success)
*/
int main(void)
{
	int n;
	int rm;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	rm = n % 10;
	if (rm > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, rm);
	}
	else if (rm != 0 && n < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rm);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, rm);
	}
	return (0);
}
