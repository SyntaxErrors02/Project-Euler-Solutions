#include <stdio.h>
#include <stdlib.h>

#define LIMIT 4e6
#define SIZE  35


int main(int argc, char *argv[])
{
	unsigned int *fibArray = (unsigned int*)malloc(SIZE * sizeof(unsigned int));
	int sum;


	sum = 0;

	int index = 0;


	while (index < SIZE)
	{

		if (index == 0)
		{
			fibArray[index] = 1;

		}
		else if (index == 1)
		{
			fibArray[index] = 2;

		}
		else
		{
			fibArray[index] = fibArray[index - 1] + fibArray[index - 2];

		}


		if (fibArray[index] % 2 == 0 && (fibArray[index] < LIMIT))
		{
			sum += fibArray[index];
			//printf("index: %d\t sum: %d\n", fibArray[index], sum); //debugging purposes. 
		}




		++index;

	}


	printf("The sum is: %d\n", sum);

	free(fibArray);

	return 0;



}