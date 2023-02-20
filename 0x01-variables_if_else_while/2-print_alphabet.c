#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void) 
{
	int n;
	srand(time(0));
	n = rand();
	n % 10;
	printf("%dLast digit of  is ", n);
	if (last_digit > 5) {
		printf("%d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0) {
		printf("%d and is 0\n", last_digit);
	}
	else {
		printf("%d and is less than 6 and not 0\n", last_digit);
	}
	return (0);
}
