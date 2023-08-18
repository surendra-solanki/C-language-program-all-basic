#include <stdio.h>
#include <stdlib.h>

//WAP that reads 8 numbers and sum of all odd values between
//them (use function for addition).


int main()
{
    int i,j,k;
    printf("Enter Value ");
    scanf("%d",&i);

    while(i>0)
    {
    if(i%2==1)
    {
      k+=i;
    }
     i--;
    }
     printf("Sum of all odd value is %d\n",k);
    return 0;
}
