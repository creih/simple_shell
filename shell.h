#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#define MAX_INPUT_SIZE 1024
void print_prompt(char *prompt);
int execute_command(char *command, char *arg_1);
bool is_equal(const char *str1, const char *str2);
void trim_new_line(char *input);
void exec_cmd(char *command, char *shell_name);
#endif
