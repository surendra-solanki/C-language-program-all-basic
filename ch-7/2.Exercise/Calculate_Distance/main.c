/////////31. WAP to calculate the distance between the two points using function.

#include <stdio.h>
#include <stdlib.h>

float Distance(float x,float y)
{
    float z;
    z=x-y;
    return z;
}

int main()
{
    float x,y,z;
    printf("Enter value origin point and end point\n");
    scanf("%f\n%f",&x,&y);

    z=Distance(x,y);
    printf("%f",z);
    return 0;
}

