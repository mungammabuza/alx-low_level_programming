#include "main.h"
	#include <unistd.h>

	/**
	 * _putchar - writes character c to the stdout
	 * @c: character to be printed
	 *
	 * return: on success 1
	 * on error, -1 will be returned and errrno is set appropriately
	 */
	int _putchar(char c)
	{
		return(write(1, &c, 1));
	}
