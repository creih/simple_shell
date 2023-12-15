#include "shell.h"
/**
 * exec_env - executes the built env
 * Return: nothing but vod
 */
void exec_env(void)
{
	char **env = environ;
	char *equal;
	size_t size;

	while(*env != NULL)
	{
		equal = strchr(*env, '=');
		if(equal != NULL)
		{
			size = _strlen(*env);
			write(STDOUT_FILENO, *env, size);
			write(STDOUT_FILENO, "\n", 1);
		}
		env++;
	}
}
