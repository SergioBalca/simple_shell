#ifndef SHELL_H
#define SHELL_H

#define GLOBAL_BUFSIZE 64
#define UNUSED(x) (void)(x)


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
#include <signal.h>

/* prototypes */

char *get_command(void);
int main(void);
char **string_separator(char *command);
int execute(char **command_arg, char *command);
void ctr_c(int __attribute__((unused))sig);
int _len(char *str);
int _env(char *command, char **command_arg);
int _strcmp(char *s1, char *s2);
int non_builtin(char **command_arg, char *command);

#endif
