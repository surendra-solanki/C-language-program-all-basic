//////34. WAP to calculate the value of S where S = 1 + 1/2 + 1/3 + … +1/50.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    float sum,k;
    printf("Enter number\n");
    scanf("%d",&i);


     for(j=1;j<=i;j++)
     {
         k=(1/(float)j);
         sum +=k;
     }
       printf("sum of Division is %0.3f\n",sum);

    return 0;
}
