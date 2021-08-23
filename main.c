#include "libhsh.h"
#include <unistd.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
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

if (pid == 0)
{
execvp(command[0], command);
}
else
{
waitpid (pid, &stat_loc, WUNTRACED);
}

free(input);
free(command);
}

return (0);
}