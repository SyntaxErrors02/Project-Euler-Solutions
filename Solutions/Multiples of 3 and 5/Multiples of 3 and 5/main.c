#include <stdio.h>

#define LIMIT 1000

int main(int argc, char *argv[])
{
	long int sum;

	int count = 0;

	sum = 0;


	while (count < LIMIT)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
		{
			sum += count;
		}

		++count;

	}


	printf("The sum of the multiples of 3 and 5 for all numbers up to 1000 is: %ld\n", sum);

	return 0;

}