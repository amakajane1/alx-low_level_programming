#include "main.h"
#include <string.h>

/**
 * _strlen - returns string length
 *
 * @s: character
 * @i - integer
 *
 * Return: returns lenght
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
