#include "main.h"

/**
 * non_builtin- executes a command with its
 * arguments
 * @command_arg: the command arguments
 * @command: the command to execute
 * Return: 0 on success.
 */

int non_builtin(char **command_arg, char *command)
{

	execute(command_arg, command);
	free(command);
	command = NULL;
	free(command_arg);
	command_arg = NULL;

	return (0);
}
