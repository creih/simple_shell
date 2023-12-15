#include "shell.h"
/**
 * n_interactive - this is for non interactive part of my shell
 * @bara: this take on the args value of main
 * @zarg: this is arguments holder
 * Return: idk yet
 */
int n_interactive(int bara, char *zarg[])
{
	int gusohoka = 0;
	char *ibyinjira = NULL, *command;
	size_t len = bara * 0, izasomwe, x = -1;

	while ((izasomwe = getline(&ibyinjira, &len, stdin)) != x)
	{
		trim_new_line(ibyinjira);
		command = strtok(ibyinjira, "\n");
		if (is_equal(command, "exit"))
		{
			break;
		}
		exec_cmd(command, zarg[0]);
	}
	free(ibyinjira);
	return (gusohoka);
}
