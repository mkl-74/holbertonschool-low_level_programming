#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * main - Multiply 2 integer
 * @nbr1:
 * @nbr2:
 * @result:
 * Return: 0
 */
int main(int argc, char *argv[])
{
	
	int nbr1;
	int nbr2;
	int result;

	if (argc < 3)
	{
	printf("error"\n);
		return (1);
	}

	nbr1 = atoi(argv[1]);
        nbr2 = atoi(argv[2]);
        result = nbr1 * nbr2;

		printf("%d\n", result);
	return (0);
}
