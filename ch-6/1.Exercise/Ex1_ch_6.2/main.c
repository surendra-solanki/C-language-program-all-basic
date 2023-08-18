////2. Write a program to compare characters stored in x and y, if same print “True” otherwise print “False”.
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
    char alpha1,alpha2;
    printf("Enter any two Alphabet ");
    scanf("%c %c",&alpha1,&alpha2);
    printf("You Enter Alphabet is:%c and %c\n",alpha1,alpha2);
    if(alpha1==alpha2)
    {
        printf("Its a True");
    }
    else
    {
        printf("Its a False");
    }

    return 0;
}
