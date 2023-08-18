////43. WAP to read and print the elements of an array of length 7, before print replace every negative number, zero with 100.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[7];
    for(i=1;i<=7;i++)
    {
        printf("\nEnter Number");
        scanf("%d",&a[i]);
        if(a[i]<=0)
        {
         a[i]=100;
        }
    }

    for(int j=1;j<=7;j++)
    {
      printf("\nArray number %d",a[j]);
    }
    return 0;
}
