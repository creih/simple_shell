#include "shell.h"
/**
 * _strlen - Computes the length of the string.
 * @s: pointer to a string.
 *
 * Return: The len of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
