#include "libhsh.h"
/**
 * command_input - this function obtains a string and separates it into blocks
 *
 * @input: variable that stores a string of characters
 * Return: args
 */
char **command_input(char *input)
{

char **args = malloc(8 * sizeof(char *));
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

return (args);
}