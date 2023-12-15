#include "shell.h"
/**
 * main - calls the executor
 * @argc: nbr of arguments
 * @argv: arguments pointer
 * Return: result of execution
 */
int main(int argc, char *argv[])
{
<<<<<<< HEAD
	char *input = NULL, *command;
	size_t len =  0 * argc;
	ssize_t izasomwe;

=======
>>>>>>> 79808e65a003e55f164419835efe6481ed141a76

	if (isatty(STDIN_FILENO))
	{
<<<<<<< HEAD
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
=======
		ese_ni_interactive(argc, argv);
	}
	else
	{
		n_interactive(argc, argv);
>>>>>>> 79808e65a003e55f164419835efe6481ed141a76
	}
	return (EXIT_SUCCESS);
}
