# <a href="url"><img src="https://e7.pngegg.com/pngimages/250/925/png-clipart-computer-terminal-linux-console-computer-icons-command-line-interface-linux-commandline-interface-linux-thumbnail.png" width="100" height="100"></a> simple_shell


## Table of Contents
* [Description](#description)
* [File Structure](#file-structure)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Example of Use](#example-of-use)
* [Bugs](#bugs)
* [Authors](#authors)
* [License](#license)

## Description
simple_shell is a command line interpreter, or shell, in the tradition of the first Unix shell written by Ken Thompson in 1971. This shell is intentionally minimalistic, yet includes the basic functionality of a traditional Unix-like command line user interface. 
Standard functions and system calls employed in simple_shell include:
   `execve, exit, fork, free, getline, malloc, perror, signal, wait, write.`

## File Structure
* [AUTHORS](AUTHORS) - List of contributors to this repository
* [man_1_simple_shell](man_1_simple_shell) - Manual page for the simple_shell
* [libhsh.h](libhsh.h) - program header file
* [main.c](main.c) - It is the main function of the program and where the commands are executed 
  * `cd` - change directory according to the specified path 
  * `exit` - exits the shell with the option of a specified status
* [changeDir.c](changeDir.c) - This function is used to switch between directories
  * `path:` -  saves the command name
* [readLine.c](readLine.c) - reads a string and returns its value minus one position
  * `prompt:` - this variable stores a character string
* [commandInput.c](commandInput.c) - tokenizing function
  * `commandInput` - creates an array of tokens from a buffer with a specified delimiter
## Requirements

simple_shell is designed to run in the `Ubuntu 20.04.2 LTS` linux environment and to be compiled using the GNU compiler collection v. `gcc 11.2` with flags`-Wall, -Werror, -Wextra, and -pedantic.`

## Installation

   - Clone this repository: `git clone "https://github.com/alomia/simple_shell.git"`
   - Change directories into the repository: `cd simple_shell`
   - Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
   - Run the shell in interactive mode: `./hsh`
   - Or run the shell in non-interactive mode: example `echo "pwd" | ./hsh`

## Usage

The simple_shell is designed to execute commands in a similar manner to sh, however with more limited functionality. The development of this shell is ongoing. The below features will be checked as they become available (see man page for complete information on usage):

### Features
- [x] uses the PATH
- [x] implements builtins
- [x] handles command line arguments
- [x] uses exit status
- [ ] shell continues upon Crtl+C (**^C**)
- [x] handles comments (#)
- [ ] custom getline type function
- [ ] handles **&&** and **||**
- [ ] aliases
- [ ] variable replacement


### Builtins

- [x] exit
- [x] env
- [x] setenv
- [x] unsetenv
- [ ] cd
- [ ] help
- [ ] history

## Example of Use
Run the executable in your terminal after compiling:
```
$ ./hsh
$ # This is our rendition of the shell
$ ls -al
total 20
drwxr-xr-x 1 sebastian sebastian  512 Aug 25 19:58 .
drwxr-xr-x 1 sebastian sebastian  512 Aug 23 18:44 ..
drwxr-xr-x 1 sebastian sebastian  512 Aug 25 19:58 .git
-rw-r--r-- 1 sebastian sebastian  171 Aug 25 19:58 AUTHORS
-rw-r--r-- 1 sebastian sebastian 3307 Aug 24 21:27 README.md
-rw-r--r-- 1 sebastian sebastian  208 Aug 25 19:58 changeDir.c
-rw-r--r-- 1 sebastian sebastian  566 Aug 25 19:58 commandInput.c
-rw-r--r-- 1 sebastian sebastian  246 Aug 25 19:58 libhsh.h
-rw-r--r-- 1 sebastian sebastian 2139 Aug 25 19:58 main.c
-rw-r--r-- 1 sebastian sebastian  942 Aug 23 18:46 man_1_simple_shell
-rw-r--r-- 1 sebastian sebastian  645 Aug 25 19:58 readLine.c
```
## Bugs
At this time, there are no known bugs.

## Authors
Sebastian Rengifo | [GitHub](https://github.com/sebasrengi) | [Twitter](https://twitter.com/sebastianorengi)

Alejandro Alomia | [GitHub](https://github.com/alomia) | [Twitter](https://twitter.com/Alomia730)

## License
simple shell is open source and can be downloaded as well as used without permission.
