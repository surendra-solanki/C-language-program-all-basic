#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k;
    printf("Enter Array Size");
    scanf("%d",&k);

    char Array2[k];
    printf("\nEnter String: ");
    scanf("\n%s",Array2);

    for(int j=0;j<k;j++)
    {
        printf("\nArray2 Character %c",Array2[j]);
    }

    return 0;
}
