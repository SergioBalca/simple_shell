#include "main.h"

/**
  * _env - prints the current environment.
  *
  * @args: arguments unused for this function.
  * Return: Always 1
  */

int _env(char **args)
{
	
	int i = 0;
	UNUSED (args);
	
	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _len(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	
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


