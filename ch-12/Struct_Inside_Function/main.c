#include <stdio.h>
#include <stdlib.h>
void Fun1();

struct Student{
    int Marks[4];
    char Grade[4];
    };



int main()
{
    struct Student P1;
  Fun1(P1);
    return 0;
}

void Fun1(struct Student P1)
{
    struct Student S1;
    for(int i=0;i<3;i++)
    {
        printf("Student Marks%d: ",i+1);
        scanf("%d",&S1.Marks[i]);

        printf("Student%d Grade:",i+1);
        scanf("\t%c",&S1.Grade[i]);
    }
}
