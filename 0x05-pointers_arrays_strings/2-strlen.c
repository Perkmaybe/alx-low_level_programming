#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: Length
 */

int _strlen(char *str)
{
	int size_of length = 0;

	while (*str++)
	{
		length++;
		str++;
	}


	return (length);
}
