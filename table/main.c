#include <stdio.h>
#include <stdlib.h>

int main()
{
    float value ,j=20.48;
    printf("Enter table number");
    scanf("%f",&value);

    for(int i=1;i<101;i++)
    printf("%.2f, ",value+(j*i));
    return 0;
}
