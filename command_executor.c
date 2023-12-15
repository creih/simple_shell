#include "shell.h"
/**
 * execute_command - executes passed parameters
 * @command: commands to be executed
 * @shell_name: the name to display before error
 * Return: wat made it exit
 */
int execute_command(char *command, char *shell_name)
{
	char *args[2];

	args[0] = command;
	args[1] = NULL;
	if (execve(args[0], args, NULL) == -1)
	{
		perror(shell_name);
		return(EXIT_FAILURE);
	}
	return(EXIT_SUCCESS);
}
