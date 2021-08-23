#include "libhsh.h"

char **command_input(char *input)
{
        char **args = malloc(8 * sizeof (char *));
        char *token = NULL;
        int index = 0;

        token = strtok(input, " ");
        while (token != NULL)
        {
                args[index] = token;
                index++;
                token = strtok(NULL, " ");
        }
        args[index] = NULL;
        execvp(args[0], args);
        return (args);
}