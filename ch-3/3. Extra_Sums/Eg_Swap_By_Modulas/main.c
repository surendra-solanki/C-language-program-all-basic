#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,sum = 0; //even number by modulas
   printf("Enter Value for i : \n");
   scanf("%d",&i);


     for(j=1;j<=i;j++)
   {
     if((j%2)==0)
     {

       sum += j;

     }

  }
   printf("%d\n",sum);
    return 0;
}
