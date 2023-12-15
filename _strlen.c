#include "shell.h"
/**
 * _strlen - gets the length of string.
 * @s: string.
 *
 * Return: length of string.
 */
size_t _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
