#include "main.h"
/**
 * main - main function for own shell
 *
 * Return: 0 on success.
 */i

int main(void)
{
	char *command = NULL;
	char **command_arg = NULL;
	int mode = 0;
	int j;
	int flag;

	while (1)
	{
		mode = isatty(STDIN_FILENO);
		if (mode == 1)
		{
			write(STDOUT_FILENO, "#myprompt$ ", 11);
		}
		command = get_command();
		j = 0;
		flag = 0;
		while (command[j])
		{
			if (command[j] != 10 && command[j] != 32)	/* if command is space or \n actives flag */
			{
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 0)
		{
			free(command);
			continue;
		}
		command_arg = string_separator(command);
		execute(command_arg, command);
		free(command);
		command = NULL;
		free(command_arg);
		command_arg = NULL;
	}
	return (0);
}
