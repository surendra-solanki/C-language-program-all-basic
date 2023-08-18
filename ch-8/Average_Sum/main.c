#include <stdio.h>

float Call_Avg();
int main()
{
    float x;
    x= Call_Avg();
    printf("Average of all number is %.2f",x);
    return 0;
}

float Call_Avg()
{
    int x,y,z,j,k;
    float i;
    printf("Enter value for average \n");
    scanf("%d\n%d\n%d\n%d\n%d",&x,&y,&z,&j,&k);
    i=(x+y+z+j+k)/5;

    return i;
}
