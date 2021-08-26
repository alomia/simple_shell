#include "libhsh.h"
/**
 * readLine - reads a string and returns its value minus one position
 *
 * @prompt: this variable stores a character string
 * Return: command
 */
char *readLine(char *prompt)
{

char *command = malloc(1 * sizeof(char));
size_t size = 0;
int len = 0, lenCommand = 0;

while (prompt[len] != '\0')
{
len++;
}

write(STDOUT_FILENO, prompt, len);

getline(&command, &size, stdin);

while (command[lenCommand] != '\0')
{
lenCommand++;
}

command[lenCommand - 1] = '\0';

return (command);
}