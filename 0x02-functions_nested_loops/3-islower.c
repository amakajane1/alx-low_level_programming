#include "main.h"

/**
 * _islower - checks if c is lowercase
 *
 * @c: character to check
 * Return: 1 if islower else  0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
