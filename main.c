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
	size_t len =  0 * argc;
	ssize_t izasomwe;


	while (1)
	{
		write(1, "#cisfun$ ", 9);
		izasomwe = getline(&input, &len, stdin);
		if (izasomwe == -1)
		{
			write(2, "\n", 1);
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
		free(input);/*freeing up the memory allocated by getline*/
	}
	return (EXIT_SUCCESS);
}
