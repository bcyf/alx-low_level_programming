#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
  int n;

  srand(time(0));
  n = rand();

  printf("Last digit of %d is ", n);

  int last_digit = n % 10;

	if (last_digit > 5)
  {
	  printf("%d and is greater than 5\n", n);
	} else if (last_digit == 0)
  {
	  printf("%d and is 0\n", n);
	} else
  {
	  printf("%d and is less than 6 and not 0\n", n);
  }

  return (0);
}
