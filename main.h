#ifndef SHELL_H
#define SHELL_H

#define GLOBAL_BUFSIZE 64
extern char **environ;
/* Libraries */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

char *get_command(void);
int main(void);
char **string_separator(char *command);
int execute(char **command_arg);
void **freedp(char **command);

#endif
