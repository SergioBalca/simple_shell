#include "main.h"
/**
 * main - main function for own shell
 *
 * Return: 0 on success.
 */

int main(void)
{
	char *command = NULL;
	char **command_arg = NULL;
	int mode = 0;
	int j;
	int flag = 0;
	char *str = "env";

	signal(SIGINT, ctr_c);
	while (1)
	{
		mode = isatty(STDIN_FILENO);
		if (mode == 1)
		{
			write(STDOUT_FILENO, "#myprompt$ ", 11);
		}
		command = get_command();
		for (j = 0; command[j]; j++)
		{
			if (command[j] != 10 && command[j] != 32)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			free(command);
			continue;
		}
		command_arg = string_separator(command);
		if (_strcmp(command_arg[0], str) == 0)
		{
			_env(command, command_arg);	/* bilt-in command */
		}
		else
		{
			non_builtin(command_arg, command);
		}
	}
	return (0);
}

/**
 * ctr_c- handles the ctr + c signal
 * without exiting the shell
 * @sig: ctr + c signal
 * Return: 0 on success.
 */

void ctr_c(int __attribute__((unused))sig)
{
	write(STDOUT_FILENO, "\n#myprompt$ ", 12);
}

/**
 * _strcmp- compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the difference between the two strings
 * using ASCCI values and pointers arithmetic
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] != '\0')
	{
		if (s1[i] - s2[i] == 0)
		{
			i++;
		}
		else
		break;
	}

	result = s1[i] - s2[i];
	return (result);
}
