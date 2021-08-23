#include "libhsh.h"

char *readline(char *prompt)
{
        char *command = malloc(sizeof (char *));
        int len = 1;
        unsigned  long size = 2;
        while (prompt[len] != '\0')
                len++;
        write(STDOUT_FILENO, prompt, len);

        getline(&command, &size, stdin);
        return (command);
}