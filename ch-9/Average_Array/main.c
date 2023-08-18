#include <stdio.h>
#include <stdlib.h>

int call();

int main()
{
    int i, a[5],sum=0;
    for(i=0;i<=4;i++)
    {
        printf("Enter Number");
        scanf("%d",&a[i]);
        sum +=a[i];
    }
    call();
    float avg = sum/5.0;
    printf("Average is %.2f",avg);
    return 0;
}

int call()
{

    printf("Hello");
}
