#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: Length
 */

size_of _strlen(const char *str)
{
	size_of length = 0;

	while (*str++)
		length++;

	return (length);
}
