#include "libhsh.h"
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

while (1)
{

input = readLine("$ ");

command = commandInput(input);

if (!command[0])
{

free(input);
free(command);
continue;
}

if (strcmp(command[0], "cd") == 0)
{
if (changeDir(command[1]) < 0)
{
perror(command[1]);
}
continue;
}

if (strcmp(command[0], "exit") == 0)
{
exit(-1);
}

pid = fork();

commandExecution(command, input, pid);
}

return (0);
}