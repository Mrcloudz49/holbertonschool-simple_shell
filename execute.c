#include "shell.h"
/**
 * command - execute cmd
 * @cmd: command to excute
 * Return: 0
 */
int command(char *cmd)
{
	pid_t my_pid;
	char *argv[2];
	struct stat st;

	argv[0] = cmd;
	argv[1] = NULL;

	if (stat(cmd, &st) != 0)
	{
		perror(argv[0]);
		return (0);
	}
	my_pid = fork();
	if (my_pid == -1)
	{
		return (EXIT_FAILURE);
	}
	if (my_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error: execve failed in command function.");
			exit(99);
		}
	}
	else
	{
		wait(NULL);
	}
	return (EXIT_SUCCESS);
}

