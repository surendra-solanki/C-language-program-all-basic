#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter value");
    scanf("%d",&x);

    do
    {
     printf("You Enter %d",x);
    }
    while(x<0);
    return 1;
}
