#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);

    if(n%2==0)
    {
      goto Even;
    }
    else
    {
     goto Odd;
    }
    Even : printf("Even number %d",n);
           return 0;
    Odd : printf("Odd number %d",n);
    return 0;
}
*/

int main()
{
    int n;
    printf("Enter any number upto limit is 25\n");
    scanf("%d",&n);

    state: printf("%d\n",n);
    n++;
    if(n<=25)
    {
     goto state;
    }
    else
    {
     printf("\nYou have enter beyond limit number");
    }

    return 0;
}
