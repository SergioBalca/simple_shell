#include "main.h"

/**
  * _env - prints the current environment.
  *
  * @command: the command passed to the shell
  * @command_arg: the arguments to execute the argument
  * Return: Always 1
  */

int _env(char *command, char **command_arg)
{

	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _len(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	free(command);
	command = NULL;
	free(command_arg);
	command_arg = NULL;
	return (1);
}

/**
  * _len- returns the length of a string
  * @str: the string passed as argument to the function
  * Return: the length of str
  */

int _len(char *str)
{
	int j = 0;

	while (str[j])
	{
		j++;
	}

	return (j);
}


