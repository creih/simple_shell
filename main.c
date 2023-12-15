#include "shell.h"
/**
 * main - calls the executor
 * @argc: nbr of arguments
 * @argv: arguments pointer
 * Return: result of execution
 */
int main(int argc, char *argv[])
{ 
	char *input = NULL, *command;
	size_t len = argc * 0, izasomwe, x = -1;

	if (isatty(STDIN_FILENO))
	{
		while (1)
		{
			print_prompt();
			izasomwe = getline(&input, &len, stdin);
			if (izasomwe == x)
			{
				write(STDOUT_FILENO, "\n", 1);
				break;
			}
			trim_new_line(input);
			command = strtok(input, "\n");
			if (is_equal(command, "exit"))
			{
				free(input);
				exit(EXIT_SUCCESS);
			}
			exec_cmd(command, argv[0]);
			continue;
		}
	}
	free(input);
	return (EXIT_SUCCESS);
}
