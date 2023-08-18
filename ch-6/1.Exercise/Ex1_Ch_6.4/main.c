/////4. Write a program to print decimal and hexadecimal of AtoZ.

#include <stdio.h>
#include <stdlib.h>

int main()
{
     char New;
    for(char New='A';New<='Z';New++)
    {
        printf("\nchar =%c \nDecimal value =%d\nHexadecimal = %x\n Octal =%o\n",New,New,New,New);
    }
    return 0;
}
