#include "shell.h"
/**
 * main - calls the executor
 * @argc: nbr of arguments
 * @argv: arguments pointer
 * Return: result of execution
 */
int main(int argc, char *argv[])
{

	if (isatty(STDIN_FILENO))
	{
		ese_ni_interactive(argc, argv);
	}
	else
	{
		n_interactive(argc, argv);
	}
	return (EXIT_SUCCESS);
}
