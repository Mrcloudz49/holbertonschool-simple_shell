#include "shell.h"

/**
 * main - shell main func
 * @ac: unused
 * @argv: pointer list of args
 * Return: 0
 */
int main(__attribute__((unused))int ac, char **argv)
{
	int tty = 0;

	tty = isatty(STDIN_FILENO);

	if (tty == 2)
	{
		perror(argv[0]);
		return (2);
	}
	else
		shell(argv, tty);
	return (0);
}

