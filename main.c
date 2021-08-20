#include "libhsh.h"

int main()
{
        char **command;
        char *input;
        pid_t  child_pid;
        int stat_loc;

        input = readline("$ ");
        command =  command_input("ls");

        child_pid = fork();

        if (child_pid == 0)
        {
                execvp(command[0], command);
        }
        else
        {
                waitpid(child_pid, &stat_loc, WUNTRACED);
        }

        return (0);
}