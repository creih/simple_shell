#include "shell.h"
/**
 * trim_new_line - removes the new line
 * @input: the inputto ct new line from
 * Return: nothing at all
 */
void trim_new_line(char *input)
{
	size_t len = _strlen(input);

	if (len > 0 && input[len - 1] == '\n')
	{
		input[len - 1] = '\0';
	}
}
