#include "main.h"
#include <stdio.h>

/**
 * _strlen - print length of input
 * @s: input string
 * Return: length of @s
 */
int _strlen(char *s)
{
	int longy = 0;

	while (*s++)
		longy++;
	return (longy);
}
