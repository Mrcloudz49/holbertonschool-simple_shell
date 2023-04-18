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
	char *buff, *tmp;
	char *cmd = NULL;
	ssize_t  valid_input = 0;

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
<<<<<<< HEAD

=======
<<<<<<< HEAD

		cmd = is_cmd_exist(cmd);
		if (cmd == NULL)
		perror(argv[0]);
		else
		{
		command(cmd);
		if (_strcmp(tmp, cmd) != 0)
		free(cmd);
		}

=======
/**
* cmd - command
* @tmp: temporary
* cmd = is_cmd_exist(char *);
* if (cmd == NULL)
* perror(argv[0]);
* else
* {
* command(cmd);
* if (_strcmp(tmp, cmd) != 0)
* free(cmd);
* }
*/
>>>>>>> f08893015bccf6dc9aa877702db84cf91b0854ec
>>>>>>> 0959775de15e2cbe2670a7e91e47c367e20a0746
		command(tmp);
	}
	free(buff);
	buff = NULL;
	return (0);
}

