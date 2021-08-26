#include "libhsh.h"
/**
 * commandExecution - executes the system commands
 *
 * @command: saves the command entered by the user
 * but separated according to the command length
 * @input: saves the command entered by the user
 * @pid: stores a number indicating the status of the child process
 * Return: void
 */
void commandExecution(char **command, char *input, pid_t pid)
{

int stat_loc;

if (pid < 0)
{
perror("Fork failed");
exit(1);
}

if (pid == 0)
{
if (execvp(command[0], command) < 0)
{
perror(command[0]);
exit(1);
}
}

else
{
waitpid(pid, &stat_loc, WUNTRACED);
}

free(input);
free(command);
}