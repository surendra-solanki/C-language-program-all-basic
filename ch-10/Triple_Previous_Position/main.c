//46. WAP to read and print the elements of an array of length 7,before print,
// put the triple of the previous position starting from the second position of the array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //signed int l=9;
     int array[7]={1,2,7,5,4,9,0};
    int k;

    for(int i=0;i<7;i++)
    {
      //  printf("Old Array Value is %d\n",array[i]);
        k=array[i-2]*3;
     printf("\nNew Array value is %d\n",k);
    }

    return 0;
}
