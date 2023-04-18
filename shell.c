#include "shell.h"
/**
 * shell - loop
 * @argv: pointer array of args
 * @tty: is/is not tty
 * Return: 0
 */
int shell(char **argv, int tty)
{
	size_t buffsize = 0;
	char *buff = NULL, *tmp = NULL; /**cmp = NULL;*/
	int valid_input = 1;

	while (valid_input)
	{
		if (tty == 1)
			printf("$ ");
		valid_input = getline(&buff, &buffsize, stdin);
		if (_strcmp(buff, "exit\n") == 0)
		{
			break;
		}
		tmp = prep_string(buff);

		if (tmp == NULL)
			perror(argv[0]);

		command(tmp);
	}
	free(buff);
	buff = NULL;
	return (0);
}

