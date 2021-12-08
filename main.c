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
int i = 0;

while (1)
{
	mode = isatty(STDIN_FILENO);
	if (mode == 1)
	{
		write(STDOUT_FILENO, "#myprompt$ ", 11);
	}
	command = get_command();
	if (command[0] == '\n')
	{
		free(command);
		continue;
	}
	command_arg = string_separator(command);
	execute(command_arg);
	free(command);
}
while (command_arg[i])
{
	free(command_arg[i]);
	i++;
}
free(command_arg);
return (0);
}
