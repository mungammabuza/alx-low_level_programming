#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments received
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
