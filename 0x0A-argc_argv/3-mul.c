#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @agrc: arg count
 * @argv: arg vector
 *
 * Return: 0 (success) or new line and 1 (error)
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	int result = a * b;
	printf("%d\n", result);

	return (0);
}
