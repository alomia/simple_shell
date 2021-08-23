#include "libhsh.h"

char *readline(char *prompt)
{
        char *command = malloc( 1* sizeof (char));
        size_t size = 0;
        int len = 0, lenCommand = 0;

        while (prompt[len] != '\0')
                len++;

        write(STDOUT_FILENO, prompt, len);

        getline(&command, &size, stdin);

        while (command[lenCommand] != NULL)
                lenCommand++;

        command[lenCommand - 1] = NULL;

        return (command);
}