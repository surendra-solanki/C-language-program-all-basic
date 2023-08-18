#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
/*
int main()
{
    int j,k,i;
    int sum=0;
    printf("Enter Value for i");
    scanf("%d",&i);

    for(j=1;j<=i;j++)
    {
         k = pow(j,j);
         sum += k;
    }
    printf("Sum of Value is %d\n",sum);
    return 0;
}
*/
/////4. Write a program to print: X=1+22+33+44+55+66
int main()
{
    int x,y,z=1,k=0;
    printf("Enter Value for x\n");
    scanf("%d",&x);

   for(int i=1;i<=x;i++)
   {
       for(int j=1;j<=i;j++)
       {
           y=z*i;
           z=y;
       }
       k+=z;
       z=1;
   }
    printf("%d",k);
    return 0;
}

/*
for(i=0;i<=x;i++)
    {
        j=i*i;
        k+=j;
    }
 printf("Sum of all number is %d",k);
 */
