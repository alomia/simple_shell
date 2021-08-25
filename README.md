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
total 4
drwxr-xr-x 1 sebastian sebastian 512 Aug 24 21:01  .
drwxr-xr-x 1 sebastian sebastian 512 Aug 23 18:44  ..
drwxr-xr-x 1 sebastian sebastian 512 Aug 24 21:01  .git
-rw-r--r-- 1 sebastian sebastian   0 Aug 23 15:47  AUTHORS
-rw-r--r-- 1 sebastian sebastian 115 Aug 20 09:52  README.md
-rw-r--r-- 1 sebastian sebastian 447 Aug 23 18:46  command_input.c
-rw-r--r-- 1 sebastian sebastian 225 Aug 23 16:19  libhsh.h
-rw-r--r-- 1 sebastian sebastian 415 Aug 24 21:01  main.c
-rw-r--r-- 1 sebastian sebastian 942 Aug 23 18:46  man_1_simple_shell
-rw-r--r-- 1 sebastian sebastian 501 Aug 23 18:46  readline.c
```
## Bugs
At this time, there are no known bugs.

## Authors
Sebastian Rengifo | [GitHub](https://github.com/sebasrengi) | [Twitter](https://twitter.com/sebastianorengi)

Alejandro Alomia | [GitHub](https://github.com/alomia) | [Twitter](https://twitter.com/Alomia730)

## License
simple shell is open source and can be downloaded as well as used without permission.
