//1.	function with no arguments and no return value
//2.	function with no arguments and with return value
//3.	function with arguments and no return value
//4.	function with arguments and with return value


#include <stdio.h>


void No_Argument_No_Return()
{
    int i=8,j=0;
    //printf("%s\n","No Argument And No Return Value");
    printf("%d\n",i+j);
}

int No_Argument_With_Return()
{
    int x=5;
    int y=4;
    return x-y;
}

void With_Argument_No_Return(int x,int y)
{
    printf("%d \n",x+y);
}

int With_Argument_With_Return(int x,int y)
{
  //printf("substraction is %d With Argument With Return Value\n",x-y);
    return x-y;
}

int main()
{
   int x,y,k,m;
   No_Argument_No_Return();
   m=No_Argument_With_Return();
   printf("%d\n",m);
   With_Argument_No_Return(3,5);
   k=With_Argument_With_Return(3,5);
   printf("%d\n",k);

    return 0;
}


