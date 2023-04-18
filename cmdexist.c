#include "shell.h"
/**
 * is_cmd_exist - check if cmd exists in path or current directory
 * @cmd: cmd to check
 * Return: pointer to cmd
 */
char *is_cmd_exist(char *cmd)
{
	struct stat st;
	char *env_path_var, *arg, *full_path;

	if (stat(cmd, &st) == 0)
	return (cmd);

	env_path_var = _strdup(getenv("PATH"));

	arg = strtok(env_path_var, ":");
	while (arg != NULL)
	{
		full_path = strcpycat(arg, cmd);
		if (stat(full_path, &st) == 0)
		{
			free(env_path_var);
			return (full_path);
		}

		arg = strtok(NULL, ":\0\n");
		free(full_path);
	}

	free(env_path_var);
	return (NULL);
}
