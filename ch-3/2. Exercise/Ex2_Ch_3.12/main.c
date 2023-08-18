/*
12. WAP to read a password until it is correct. For wrong password
print "Incorrect password" and for correct password print
"Correct password" and quit the program. The correct password is
3355.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    do
    {   int i;
        printf("\nEnter Password =");
        scanf("%d",&i);
        if(i==3355)
        {
         printf("\nCorrect Password\n");
         break ;
        }
         else
        {
         printf("Incorrect Password!\n");
        }
    }
    while(1);
    return 0;
}


