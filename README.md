#### C - Simple shell
# Simple Shell

This is a Simple Shell for the Holberton School Simple Shell project. In this project, we use functions, system calls, created processes with fork (child and parent), prototypes, how the shell uses PATH to find programs, and how to execute another program with the execve system call, as well as how to suspend the execution of a process until on its children terminates. We also implement the EOF condition and exit status.



## Making use of the Shell:
1. First Clone the Repo
2. Compile with: gcc -Wall -Werror -Wextra -pedantic *.c -o Cobby
3. Execute with: ./Cobby [option][file]


Make use of the shell by typing in commands with the path. Example: type in /bin/ls or /bin/ls/ -l, or /bin/pwd. This will list the files in the current directory, list files in long format, and list the current working directory, respectively.

In order to make use of the Shell in non-interactive mode, you can type in echo "/bin/ls" | ./Cobby, this will pass the command from standard output to standard input.


## Extras
We have also included a README.md file, an AUTHORS file, and a manpage (man_1_simple_shell) file.

# Authors
Koskei Ian, Sixolise Klaas

