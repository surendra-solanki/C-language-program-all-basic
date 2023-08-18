#include <stdio.h>
#include <stdlib.h>

int main()
{    //6. WAP that prints all even numbers from 1 to 25.
    int i,j,k;
    printf("Enter number:");
    scanf("%d",&i);

for (j=1;j<=i;j++)
{
    if((j%2)==0)
    {
    printf("%d\n",j);
    }
}
    return 0;
}
