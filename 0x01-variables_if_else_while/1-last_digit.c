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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
	printf("Last digit of %d is and is greater than 5\n", n);
	}
	else if (n != 0 && n < 6)
	{
	printf("Last digit of %d is and is less than 6 and not 0\n", n);
	}
	else
	{
	printf("Last digit of %d is and is 0\n", n);
	}
	return (0);
}
