#include "libhsh.h"

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