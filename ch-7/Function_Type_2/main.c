//1.	function with no arguments and no return value
//2.	function with no arguments and with return value
//3.	function with arguments and no return value
//4.	function with arguments and with return value

#include <stdio.h>


void Add1()
{
    int i=5,j=10;
    printf("%d\n",i+j);
}

int Add2()
{
    int i=5,j=10;
   return i+j;
}

void Add3(int i,int j)
{
    printf("%d\n",i+j);
}

int Add4(int i,int j)
{
    return i+j;
}

int main()
{
    int k,i,j;
    printf("Enter two value");
    scanf("%d\n%d",&i,&j);

    Add1();

    k= Add2();
    printf("%d\n",k);

    Add3(i,j);

    k=Add4(i,j);
    printf("%d",k);

    return 0;
}
