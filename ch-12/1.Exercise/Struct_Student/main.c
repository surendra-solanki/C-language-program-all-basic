///////1. Make structure for student name, roll no, and print each student name and roll no in a single line.
#include <stdio.h>
#include <stdlib.h>

 struct data{
    char Name[10];
    int Roll_No;
    };

int main()
{
    int x,y;
    printf("Enter Number Of Student :");
    scanf("%d",&x);

    struct data D[x];
    for(int i=0;i<x;i++)
    {
     printf("\nEnter Name of Student%d :",i+1);
     scanf("%s",D[i].Name);
     printf("Enter Roll no :");
     scanf("%d",&D[i].Roll_No);
    }

     for(int i=0;i<x;i++)
    {
     printf("\n\nStudent%d Data\n",i+1);
     printf("Name is :%s\n",D[i].Name);
     printf("Roll no :%d\n",D[i].Roll_No);
    }

    printf("\nEnter Student data you want");
    scanf("%d",&y);
    printf("\nStudent Name:%s\n",D[y-1].Name);
    printf("Roll No:%d\n",D[y-1].Roll_No);

    return 0;
}
