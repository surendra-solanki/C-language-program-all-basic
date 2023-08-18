///2. Write a program to generate character arrays in run time and print each element side by side.
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int k;
    printf("Enter Array Size");
    scanf("%d",&k);
    char Array[k];

    for(int i=0;i<k;i++)
    {
    printf("Enter character:");   ///take from user single char
    scanf("\n%c",&Array[i]);
    }

     for(int j=0;j<k;j++)
    {
     printf("\nCharacter %c",Array[j]);
    }

    char Array2[k];
    printf("\nEnter String: ");
    scanf("\n%s",Array2);

    for(int j=0;j<k;j++)
    {
        printf("\nArray2 Character %c",Array2[j]);
    }

    printf("\nArray2 String is %s",Array2);
    return 0;
}
