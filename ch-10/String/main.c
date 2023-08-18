#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%s","You have"
            "to dream before your dream"" can come true."
                 "\n-- A.P.J. Abdul Kalam");
    //printf("\nh");
    printf("%c\n",'ksvdsv');   //only last char will print in op.
    int*ptr = "Hello world lets make some code\n";
    *ptr='m';   ////may be error occour some times
    printf("%8.3s",ptr);
    printf("%12.5s",ptr);
    puts(ptr);
    puts(ptr);
    return 0;
}
