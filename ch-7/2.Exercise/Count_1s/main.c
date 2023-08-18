/////36. WAP which reads an integer and counts the number of 1s in the given number.

#include <stdio.h>

int Call_Count(int x);

int main()
{
    int x,j;
    printf("Enter Value to find 1's\n");
    scanf("%d",&x);
    j=Call_Count(x);
    printf("%d",j);
    return 0;
}

int Call_Count(int x)
{
    int count,k=0;

   while(x>0)
   {
       int y,z;
       y=x%10;
       count = y;
       z = x/10;
       x=z;
       if(count==1)
       {
           k+=count;
       }
   }
    //printf("\nOnes(1's) is %d times in number\n",k);
return k;
}
