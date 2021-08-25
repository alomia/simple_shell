#include "libhsh.h"
/**
 * changeDir - This function is used to switch between directories
 *
 * @path: saves the command name
 * Return: path
 */
int changeDir(char *path)
{
        return (chdir(path));
}

