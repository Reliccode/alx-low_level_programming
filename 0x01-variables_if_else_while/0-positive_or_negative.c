#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * the program use if, else, else if
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 4;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("d% is negative\n", n);
	}
	return (0);
}
