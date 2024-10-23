#include "shell.h"

int main(void)
{
    char *line = NULL;
    char *argv[2];
    size_t len = 0;
    ssize_t nread;
    pid_t pid;
    int status;

    while (1)
    {
        printf("#cisfun$ ");
        nread = getline(&line, &len, stdin);

        if (nread == -1)
        {
            printf("\n");
            break;
        }
        line[nread - 1] = '\0';

        pid = fork();
        if (pid == -1)
        {
            perror("fork");
            continue;
        }

        if (pid == 0)
        {
            argv[0] = line;
            argv[1] = NULL;  

            if (execve(argv[0], argv, NULL) == -1)
            {
                perror("./hsh");
            }
            exit(EXIT_FAILURE);
        }
        else
        {
            wait(&status);
        }
    }

    free(line);
    return 0;
}
