#include "main.h"
#include <stdio.h>

/**
 * main - prints the nimbers from 1 to 100
 * followed by a new line
 * prints Fizz for multiples of 3
 * prints Buzz for multiples of 5
 * print FizzBuzz for multiples of both 3 and 5
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1 ; i < 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz");
	printf("\n");

	return (0);
}
