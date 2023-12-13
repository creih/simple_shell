#include "shell.h"
/**
 * exec_cmd - executes the tokenised command
 * @command: the command to execute
 * @shell_name: name of shell
 * Return: NOne
 */
void exec_cmd(char *command, char *shell_name)
{
	pid_t child_pid;
	int result = 0;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		result = execute_command(command, shell_name);
		exit(result);
	}
	else {
		waitpid(child_pid, &result, 0);
		if (WIFEXITED(result) && WEXITSTATUS(result) == EXIT_SUCCESS)
			return;
	}
}
