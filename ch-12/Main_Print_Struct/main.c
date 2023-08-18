#include <stdio.h>
#include <stdlib.h>

struct ClgStd{
        char Name[20];
        char ID[7];
        char Branch[20];
        int Year;
};

 struct ClgStd fun();

int main()
{
 struct ClgStd S;
 S=fun();
 printf("-------------------------------\n");
 printf("\nName:%s",S.Name);
 printf("\nID:%s",S.ID);
 printf("\nBranch:%s",S.Branch);
 printf("\nAdm. Year:%d\n",S.Year);
 return 0;
}

 struct ClgStd fun()
{
    struct ClgStd P1;

    printf("Enter name:");
    gets(P1.Name);
    printf("Enter Id:");
    gets(P1.ID);
    printf("Enter Branch Name:");
    gets(P1.Branch);
    printf("Enter Year");
    scanf("%d",&P1.Year);

    return P1;
}
