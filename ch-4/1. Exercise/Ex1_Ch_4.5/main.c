//5. Write a program to print the reverse digit. Ex. x=59 => c=95

#include <stdio.h>
#include <stdlib.h>
void Reverse_Function(int i);

int i;

int main()
{

    printf("Enter value for i:\n");
    scanf("%d",&i);
    Reverse_Function(i);
    return 0;
}
/*
void Reverse_Function(int i,int rev)
{
   while(i>0)
   {
       rev =i%10;
       printf("%d",rev);
       i=i/10;
   }
}

*/
void Reverse_Function(int i)
{
   int k,rev;
   while(i>0)
   {
       rev =i%10;
       i=i/10;
       k=rev*10+i;
       printf("Reverse is %d",k);
       i=i/10;
   }
}
