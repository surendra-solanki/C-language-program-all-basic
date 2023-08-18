////1. Write a program to generate an array of characters H, E, L, L, O , print each character array and size of array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Array[]={'H','E','L','L','O'};
    for(int i=0;i<sizeof(Array);i++)
    {
    printf("\n\nCharacter of array is :%c",Array[i]);
    }

    printf("\n\n Size of array is %d ::: Size of element is %d\n",sizeof(Array),sizeof(Array[0]));

    char Array2[]={"HELLO"};

    for(int i=0;i<sizeof(Array2)-1;i++)
    {
        printf("\n Character is %c",Array2[i]);
    }
    return 0;
}


