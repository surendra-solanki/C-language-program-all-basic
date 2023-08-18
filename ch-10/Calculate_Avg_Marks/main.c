/////44. WAP to calculate the average marks of mathematics of some students.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Math[5];
    float Sum=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter Marks of Student%d is :",i+1);
        scanf("%d",&Math[i]);
        Sum+=Math[i];
    }

    float Avg = Sum/5;
    printf("Average of marks is %.2f",Avg);
    return 0;
}
