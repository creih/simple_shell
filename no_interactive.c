#include "shell.h"
/**
 * n_interactive - this is for non interactive part of my shell
 * @bara: this take on the args value of main
 * @zarg: this is arguments holder
 * Return: idk yet
 */
void n_interactive(int bara, char *zarg[])
{
	char *ibyinjira = NULL, *command;
	size_t len = bara * 0;
	ssize_t izasomwe, x = -1;

	while ((izasomwe = getline(&ibyinjira, &len, stdin)) != x)
	{
		trim_new_line(ibyinjira);
		command = strtok(ibyinjira, "\n");
		if (is_equal(command, "exit"))
		{
			free(ibyinjira);
			return;
		}
		exec_cmd(command, zarg[0]);
	}
	free(ibyinjira);
}
