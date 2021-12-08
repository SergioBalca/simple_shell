#include "main.h"
/**
 * execute - execute command
 * @command_arg: command to execute
 * @command: string passed as argument to our shell
 * Return: 0 on success
 */

int execute(char **command_arg, char *command)
{
	int exec = 0;
	pid_t my_pid = 0;
	int status = 0;

	my_pid = fork();
	{
		if (my_pid == 0) /*child process*/
		{
			exec = execve(command_arg[0], command_arg, environ);
			if (exec == -1)
			{
				free(command);
				free(command_arg);
				perror("./shell");
				exit(EXIT_FAILURE);
			}
		}
		wait(&status);
	}
	return (0);
}
