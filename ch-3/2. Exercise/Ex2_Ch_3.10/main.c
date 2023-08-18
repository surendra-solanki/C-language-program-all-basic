//10. WAP to find and print the square of each one of the even
//values from 1 to a specified value.

#include <stdio.h>
#include <stdlib.h>
int Sum_Of_Even_Num(int i);

int main()
{
    int i;
    printf("Enter Value for i ");
    scanf("%d",&i);
    Sum_Of_Even_Num(i);
    return 0;
}

int Sum_Of_Even_Num(int i)
{
    int j,k=0;
    for(j=1;j<=i;j++)
    {
        if(j%2==0)
        {
            printf("Even no. %d\n",j);
            k+=j;

        }
    }
    printf("Sum of all even number is %d",k);
    return 0;
}
