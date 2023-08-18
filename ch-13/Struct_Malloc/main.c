#include <stdio.h>
#include <stdlib.h>
struct person *Fun();

struct person {
    char Name[10];
    int Id;
};

int main()
{
    struct person *S;
    S=Fun();
    for(int i=0;i<3;i++)
    {
    printf("\nName::%s",(S+i)->Name);
    printf("\nID:%d",(S+i)->Id);
    }
    free(S);
    return 0;
}

struct person *Fun()
{
    struct person *P;

    //P =(struct person*)malloc(3 * sizeof(struct person));
    P =(struct person*)calloc(3 , sizeof(struct person));
    for(int i=0;i<3;i++)
    {
    printf("Enter Name:");
    scanf("%s",(P+i)->Name);
    printf("Enter Id:");
    scanf("%d",&(P+i)->Id);
    }
    return P;
}



