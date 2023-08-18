#include <stdio.h>
#include <stdlib.h>
int Reverse_Function(int i,int add);

int main()
{
    int i,m,add;
    printf("Enter Value ");
    scanf("%d",&i);
    m = Reverse_Function(i,add);
     if(i== m)
    {
       printf("This is special number ");
    }
       else
    {
      printf("This is not a special number");
    }
    return 0;
}

int Reverse_Function(int i,int add)
{
    int j,k,sum=1;
    while(i>0)
   {
       j =i%10;
       if(j!=0)
     {
       for(k=1;k<j;k++)
      {
        sum *= k;
      }
       add = sum+k;
       i=i/10;
     }
   }
    //printf("sum is %d\n",add);
return add;
}
