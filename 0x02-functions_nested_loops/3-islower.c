#include "main.h"
/**
 * _islower - check whether char is lowercase
 * @c: char to be checked
 * return: 1 if char is kowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
