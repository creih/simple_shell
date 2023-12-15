#include "shell.h"

/**
 *print_prompt - prints prompt to the stdout.
 *
 * Return: void.
 */
void print_prompt(void)
{
	write(STDOUT_FILENO, "#cisfun$ ", sizeof("#cisfun$ "));
}
