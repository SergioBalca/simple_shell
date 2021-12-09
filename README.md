#OUR OWN SIMPLE SHELL
## Table of Contents
1. [Flowchart](#Flowchart)
2. [Description](#Description)
3. [Installation](#Installation)
4. [Compilation](#installation)
5. [Examples](#examples)
6. [Authors](#Authors)
<h2>Flowchart</h2>
![Screenshot](https://github.com/fyga10/simple_shell/blob/master/Interactive_shell.drawio.png)
<h2>Description</h2>
<p>Our simple shell tries to emulate the behavior of a standart Unix shell, when a user enters commands with its arguments</p>
<p>So, in general, a Shell is a user interface to use the services of a computer and can be used in an interactive mode and non interactive mode<p>
<h2>Installation</h2>
<p>If you want to use this shell you need to clone this repository:</p>

    git clone https://github.com/fyga10/simple_shell
<h2>Compilation</h2>
</p>The files created here were compiled on Ubuntu 20.04 LTS with the following command</p>

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
<h2>Examples</h2>
<h5>Interactive mode</h5>

    fyga10@DESKTOP-N00MDOS:~/holberton/simple_shell$ ./hsh
    #myprompt$ /bin/pwd
    /home/fyga10/holberton/simple_shell

    #myprompt$ /bin/ls
    AUTHORS  README.md  execute.c  get_command.c  hsh  main.c  main.h  man_1_simple_shell  string_separator.c
<h5>Non interactive mode</h5>

    fyga10@DESKTOP-N00MDOS:~/holberton/simple_shell$ echo "/bin/pwd" | ./hsh
    /home/fyga10/holberton/simple_shell

    echo "/bin/ls" | ./hsh
    AUTHORS  README.md  execute.c  get_command.c  hsh  main.c  main.h  man_1_simple_shell  string_separator.c

***
<h5>Authors</h5>
<strong><em>created by Sergio Balcázar and Frank Giraldo</em></strong>
