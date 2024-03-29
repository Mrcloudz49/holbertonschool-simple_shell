#ifndef SSHELL
#define SSHELL
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
extern char **environ;
char *strcpycat(char *dest, char *str);
int shell(char **argv, int tty);
int command(char *cmd);
char *prep_string(char *cmd);
char *is_cmd_exist(char *cmd);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
#endif
