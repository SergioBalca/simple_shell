#include "main.h"
/**
 * string_separator - tokenizes a string
 * @command: command to tokenize
 * Return: an aaray of strings
 */

char **string_separator(char *command)
{
	int buffer = GLOBAL_BUFSIZE;
	int pos = 0;
	char **tokens = NULL;
	char *token = NULL;
	char *delimiter = " \t\n";

	tokens = malloc(buffer * sizeof(char *));

	if (!tokens)
	{
		free(tokens);
		free(command);
		perror(".shell");
		exit(EXIT_FAILURE);
	}
	token = strtok(command, delimiter);
	while (token)
	{
	tokens[pos] = token;
	pos++;
	token = strtok(NULL, delimiter);
	}
	tokens[pos] = NULL;
	return (tokens);
}
