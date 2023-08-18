#include <stdio.h>
#include <stdlib.h>

int main()
{
    //8. WAP that reads 10 numbers and counts the number of positive
    //numbers and negative numbers.
    for (signed int i=-3;i<=10;i++)
    {
        //if((i/1)!=(-i))
        if(((-i)+1)!=(i+1))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
