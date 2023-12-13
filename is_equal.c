#include "shell.h"
/**
 * is_equal - checks if 2 strings are same like strcmp
 * @str1: string 1
 * @str2: string 2
 * Return: true or false
 */
bool is_equal(const char *str1, const char *str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
			return (false);
		str1++;
		str2++;
	}
	return (*str1 == '\0' && *str2 == '\0');
}
