#ifndef SIMPLE_SHELL_LIBHSH_H
#define SIMPLE_SHELL_LIBHSH_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

char *readline(char *);
char **command_input(char *);

#endif
