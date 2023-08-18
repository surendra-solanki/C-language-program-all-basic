#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Enter number\n");
    scanf("%d",&i);
    while(i<=10)
    {
     printf("%d\n",i);
     if(i==0)
     {

     //continue;
     break;
     }
     i--;

     }
     printf("End");

    return 0;
}


/*
int main()
{
    int i=1;
    printf("Enter number\n");
    scanf("%d",&i);
    while(i<=10)
    {
        printf("Enter value is %d\n",i);
        i++;
    }
 return 0;
}
*/
