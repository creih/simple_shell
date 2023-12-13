#include "shell.h"
/**
 * main - calls the executor
 * @argc: nbr of arguments
 * @argv: arguments pointer
 * Return: result of execution
 */
int main(int argc, char *argv[])
{
	int result = argc;
	char *input = NULL, *command, **ptr_env = environ;
	size_t len = 0, izasomwe, x = -1;

	while (1)
	{
		write(0, "#cisfun$ ", 9);
		izasomwe = getline(&input, &len, stdin);
		if (izasomwe == x)
			break;
		trim_new_line(input);
		command = strtok(input, "\n");
		if (is_equal(command, "exit"))
		{
			free(input);
			exit(EXIT_FAILURE);
		}
		if (is_equal(command, "env"))
		{
			while (*ptr_env != NULL)
			{
				write(STDOUT_FILENO, *ptr_env, sizeof(*ptr_env));
				write(STDOUT_FILENO, "\n", 1);
				ptr_env++;
			}
		}
		exec_cmd(command, argv[0]);
	}
	free(input);
	return (result);
}
