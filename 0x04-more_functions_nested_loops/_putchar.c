#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes chaacter c to stdout
 * @c: character to print
 *
 * Return: on success 1.
 * On error: -1 returned and error is appropriately set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
