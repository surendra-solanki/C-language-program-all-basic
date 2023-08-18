
//15. WAP to convert specified days ‘’2389’’ into years and days.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Enter Number for days =");
    scanf("%d",&i);
    float j=(float)i/365;
    printf("\n%.2f Years\n",j);
    float k=(float)i/7;
    printf("%.2f Weeks",k);
    return 0;
}

