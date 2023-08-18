 ////////1. Write a program to enter character ‘A’ and ‘B’ in run time and print it.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alpha1,alpha2;
    printf("Enter any two Alphabet ");
    scanf("%c %c",&alpha1,&alpha2);
    printf("You Enter Alphabet is:%c and %c",alpha1,alpha2);

    return 0;
}
