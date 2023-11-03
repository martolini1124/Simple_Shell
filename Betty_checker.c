#include "shell.h"
#include <stdio.h>

#define MAX_VALUE 100

/**
 * betty - Entry point of the program
 *
 * Return: 0 on success
 */
int betty(void)
{
	int i;

	for (i = 1; i <= MAX_VALUE; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}

	return (0);
}

