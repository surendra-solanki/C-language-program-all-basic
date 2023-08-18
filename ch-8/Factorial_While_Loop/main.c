#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=1;
    printf("Enter number for factorial\n");
    scanf("%d",&i);
    while(i>1)
    {
      j=j*i;
      i--;
    }
    printf("%d",j);
    return 0;
}
