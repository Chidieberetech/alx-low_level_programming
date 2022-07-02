#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 
 * The variable n will store a different value every time you will run this program
 * main - determine if number is positive or negative
 *
 * Description: This program will assign a random number to the variable n each time it is executed.
 * 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}