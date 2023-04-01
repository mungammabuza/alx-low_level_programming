#include "lists.h"
#include <stdio.h>

void print_infrontof_main(void) __attribute__((constructor));

/**
 * print_infrontof_main - print text before main function
 *
 * Return: void
 */
void print_infrontof_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
