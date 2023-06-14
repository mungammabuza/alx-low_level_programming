#include <stdio.h>
#include "main.h"

/**
 * program that prints number of arguments it recieves
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
