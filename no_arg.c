#include "shell.h"
/**
 *
 *
 *
 *
 */
int main(void)
{
	char *input;
	size_t len = 0;
	pid_t pid;

	while(1)
	{
		printf("#cisfun$ ");
		getline(&input, &len, stdin);
		input[strlen(input) - 1] = '\0';
		pid = fork();
		if(pid == -1)
		{
			perror("Fork failed");
			exit(EXIT_FAILURE);
		}
		else if(pid == 0)
		{
			char *args[2];
			args[0] = input;
			args[1] = NULL;
			if (execve(input, args, NULL) == -1)
			{
				perror("Execution failed");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			wait(NULL);
		}
	}
	free(input);
	return (0);
}
