//////1. Write a program: A function called “print” with no argument or
//////return value but when it is called, it prints “Hello, you just called print”.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    print();
    return 0;
}

void print()
{
    printf("\"Hello, you just called print\"");
}
