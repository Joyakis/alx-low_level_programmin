#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n  =  rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n  ==  0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

=======
printf("Enter n.\n")
scan f("%d , &n);
if(n < 0)
printf("n is negative\n")
else if (n > 0)
printf("n is positive\n")
else
printf("n is zero\n");
return (0);
}
>>>>>>> 8adb5ab0ff9c4b6b6fbdc4a96d91b5886dc6d251
