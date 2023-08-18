///////2. Write a program to find a factorial of 10 using WHILE LOOP, and print it.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=1,k=1;
    printf("Enter number");
    scanf("%d",&i);

    while(j<=i)
    {
     k*=j;
     j++;
    }
    printf("%d",k);
    return 0;
}
