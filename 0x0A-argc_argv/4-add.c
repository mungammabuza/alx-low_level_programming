#include "main.h"
#include <stdio.h>

/**
 * main ‐ adds positve numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int sum;
	int count;
	int i;

	count = i;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (i != int)
			{
				printf("ERROR\n");
				return (1);
			}
		}
		sum += _atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
