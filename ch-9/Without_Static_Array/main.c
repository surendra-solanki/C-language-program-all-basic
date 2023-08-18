#include <stdio.h>
#include <stdlib.h>
int Fun(int *p);

int main()
{
    int *p;
    Fun(p);
    for(int j=0;j<5;j++)
    {
        printf("New Value of element : %d :::::::%d\n",*(p+j),(p+j));
    }
    return 0;
}

   int Fun(int *p)
{
    for(int j=0;j<5;j++)
    {
       printf("Enter Number:");
       scanf("%d",&p[j]);
    }
          printf("Address %d\n",p);
          return 0; ///here we can use address(&) keyword or without address keyword also its run both are true.
}
