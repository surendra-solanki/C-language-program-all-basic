////////32. WAP to convert 68500 (in seconds) to hours, minutes and seconds using function.

#include <stdio.h>
#include <stdlib.h>

float Conversion_Seconds(int x )
{
    int z,N;
    z=x%3600;
    N=z%60;
    return N;
}

float Conversion_Minutes(int x)
{
    int z,N;
    z=x%3600;
    N=z/60;
    return N;
}

float Conversion_Hours(int x)
{
    return (x/3600);
}

int main()
{
     int x,h,m,s;
     printf("Enter Number of seconds \n");
     scanf("%d",&x);

     h=Conversion_Hours(x);
     m=Conversion_Minutes(x);
     s=Conversion_Seconds(x);

    printf("%dHour,%dMin,%dSec",h,m,s);

    return 0;
}
