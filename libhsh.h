#ifndef SIMPLE_SHELL_LIBHSH_H
#define SIMPLE_SHELL_LIBHSH_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

char *readLine(char *);
char **commandInput(char *);
int changeDir(char *);
void commandExecution(char **, char *, pid_t);

#endif