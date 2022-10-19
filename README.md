Custome _printf

_printf is a simple custom printf function that formats and prints data to the standard output.

Description:
_printf() function formats and prints data to the standard output according to the format that was specified.



The function has the following conversion specifies:

%c - prints a characrer

%d - print a decimal integer

%s - prints a string

%i - prints an integer



Installation
you can clone this repository and use the function on your local machine.

git clone https://github.com/dino-corry/printf.git


Usage
include the main.h header file on the function for using _printf().
All the files are to be compiled on Ubuntu 14.04 LTS
Compile your code with `gcc -Wall -Werror -Wextra -pedantic *.c`
see example below:


#include <stdio.h>
#include "main.h"


int main(void)

{
    int i = 10;
    int print;
    char *s = "printf still under test by Dino & Temi";
    _printf("%d %s %c\n", i, s, 'c');
     print =  _printf("%d", s); /* get number of characters */
     printf("%d\n", print); /* print number of characters */
    return 0;
    
}


License
GNU General Public License v3.0


Copyright
Copyright (c) 2022 Dino Corry
