//shell
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

char **command_input(char *input)
{
	char **command = malloc(8 * sizeof (char *));
	char *separator = " ";
	char *parsed;
	int index = 0;

	parsed = strtok(input, separator);
	while (parsed != NULL)
    	{
		command[index] = parsed;
		index++;
		parsed = strtok(NULL, separator);
	}

	command[index] = NULL;
	return (command);
}

char *readline(char *prompt)
{
  char *command = malloc( 1* sizeof (char));
  size_t size = 0;
  int len = 0, lenCommand = 0;

  while (prompt[len] != '\0')
    len++;

  write(STDOUT_FILENO, prompt, len);

  getline(&command, &size, stdin);

  while (command[lenCommand] != '\0')
    lenCommand++;

  command[lenCommand - 1] = '\0';

  return (command);
}
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
  char **command;
  char *input;
  pid_t pid;
  int stat_loc;

  while (1)
    {
      input = readline("$ ");

      command = command_input(input);

      pid = fork();
      if(pid == 0)
	{
	  execvp(command[0], command);
	}
      else
	{
	  waitpid(pid, &stat_loc, WUNTRACED);
	}
      free(input);
      free(command);
    }

  return (0);
}
