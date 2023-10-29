#include <stdio.h>
#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{	
	char *p;
	char s[] = "Expect the best. Prepare for the worst.\n
Capitalize on what comes.";
	

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
