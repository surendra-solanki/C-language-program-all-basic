////////33. Enter 10 numbers from the user and print the sum of all odd values between them.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=0;
    printf("Enter number");
    scanf("%d",&i);

     for(j=0;j<=i;j++)
     {
         if(j%2==1)
         {
            k +=j;
         }
     }
      printf("%d",k);

    return 0;
}
