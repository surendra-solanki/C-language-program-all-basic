/////42. WAP to create integer array size 20, elements entered by user and print the highest element with its position.
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int count=0,i,z=0,a[5]={0};//a[20]

   for(i=0;i<5;i++) //i<=20
   {
       printf("\nEnter Element number%d ",i+1);
       scanf("%d",&a[i]);

       if(a[i]>=z)
       {
        z=a[i];
        count++;
       }
   }
    printf("Highest Number %d",z);
    printf("\nPosition %d",count+1);
    return 0;
}
