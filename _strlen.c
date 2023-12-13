#include "shell.h"
/**
 * _strlen - counts the strings length
 * @s: the string to calculate the ength of
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
