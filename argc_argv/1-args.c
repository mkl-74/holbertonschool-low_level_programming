#include <stdio.h>

/**
 * main - number of argument
 * @argc: value of all argument
 * @argv: number of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
