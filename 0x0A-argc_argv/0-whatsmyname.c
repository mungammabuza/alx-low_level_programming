#include <stdio.h>
#include "main.h"

/**
 * program that prints its own name
 * even is name is changed
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
