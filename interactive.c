#include "shell.h"
/**
 * ese_ni_interactive - this is to run if interactive mode is on
 * @bara: this will hold argc value from main
 * @zarg: this will hold argv part of main
 * Return: idk yet
 */
int ese_ni_interactive(int bara, char *zarg[])
{
	char *ibyinjira = NULL, *command;
	size_t len = bara * 0, izasomwe, x = -1;

	while (1)
	{
		print_prompt();
		izasomwe = getline(&ibyinjira, &len, stdin);
		if (izasomwe == x)
		{
			write(STDOUT_FILENO, "\n", 1);
			break;
		}
		trim_new_line(ibyinjira);
		command = strtok(ibyinjira, "\n");
		if (is_equal(command, "exit"))
		{
			free(ibyinjira);
			exit(EXIT_SUCCESS);
		}
		exec_cmd(command, zarg[0]);
		continue;
	}
	free(ibyinjira);
	return (EXIT_SUCCESS);
}
