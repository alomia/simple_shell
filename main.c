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
        int stat_loc;

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
                        waitpid (pid, &stat_loc, WUNTRACED);
                }

                free(input);
                free(command);
        }

        return (0);
}