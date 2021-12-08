#include "main.h"
/**
 * get_command - get command from stdin
 * Return: line.
 */
char *get_command(void)
{
	char *line = NULL;
	size_t size = 0;
	int read = 0;

	read = getline(&line, &size, stdin);
	if (read == -1)
	{
		if (read == EOF)
		{
			if ((isatty(STDIN_FILENO)) == 1)
			{
			
				write(STDOUT_FILENO, "\n", 1);
				size = 0;
				free(line);
				exit(EXIT_SUCCESS);
			}
			else
			{
			
				size = 0;
				free(line);
				exit(EXIT_SUCCESS);
			}
		}
		else
		{
			size = 0;
			free(line);
			perror("/shell");
			exit(EXIT_FAILURE);
		}
	}
	read = 0;
	size = 0;
	return (line);
}
