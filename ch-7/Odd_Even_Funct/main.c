#include <stdio.h>

int Call_Even(int i);
int Call_Odd(int i);
int main()
{
    int i,k,m;
    printf("Enter number for find out Odd and Even:");
    scanf("%d",&i);

    k=Call_Even(i);
    printf("Sum Of Even Number =%d\n",k);
    m=Call_Odd(i);
    printf("Sum Of Odd Number =%d",m);
    return 0;
}


int Call_Even(int i)
{
    int l=0;
    for (int j=1;j<=i;j++) //even
    {
        if((j%2)==0)
        {
        l+=j;
        }
    }
    return l;
}

int Call_Odd(int i)
{
    int l=0;
    for (int j=1;j<=i;j++) //odd
    {
        if((j%2)!=0)
        {
        l+=j;
        }
    }
    return l;
}

