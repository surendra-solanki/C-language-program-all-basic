#include <stdio.h>
#include <stdlib.h>

int main()
{   int x,y;
    printf("Enter value for x and y: \n");
    scanf("%d %d",&x,&y);
    (x>y)? printf("Biggest Value You have enter is for x=%d \n",x): printf("Biggest Value You have enter is for y=%d",y);
    return 0;
}
