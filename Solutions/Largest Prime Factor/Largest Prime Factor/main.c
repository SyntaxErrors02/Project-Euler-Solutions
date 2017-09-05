#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{

	long long int num = 600851475143;
	long long int divisor = 2;
	long long int largeDiv = 0;
	bool flag = false;




	while (!flag)
	{

		if (num % divisor == 0)
		{
			num = num / divisor;
			largeDiv = divisor;


			if (num == 1)
			{
				flag = true;
			}
		}
		else
		{
			++divisor;
		}


	}

	printf("Largest Prime Factor is: %d\n", largeDiv);



	return 0;
}




