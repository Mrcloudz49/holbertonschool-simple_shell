#include "shell.h"

/**
 * prep_string - takes a string, replaces newline with null byte
 * @cmd: command to prep
 * Return: pointer to first char of cmd
 */
char *prep_string(char *cmd)
{
	int i = 0;

	while (*cmd == ' ')
	cmd++;
	for (i = 0; i < _strlen(cmd); i++)
	{
		if (cmd[i] == '\n' || cmd[i] == ' ')
		{
			cmd[i] = '\0';
			return (cmd);
		}
	}
	return (cmd);
}
