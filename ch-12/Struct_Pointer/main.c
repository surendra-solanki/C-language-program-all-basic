#include <stdio.h>
#include <stdlib.h>
struct Detail{
    char Name[20];
    int Age;
    char Design[15];
    int Branch_Code;
};
int main()
{
    struct Detail E;

    printf("Enter Name:");
    gets(E.Name);

    printf("Enter Age:");
    scanf("%d",&E.Age);

    printf("Enter Designation:");
    gets(E.Design);

    printf("Enter Branch Code:");
    scanf("%d",&E.Branch_Code);

    struct Detail *N=&E;

    printf("Name:%s",N->Name);
    printf("Age:%d",N->Age);
    printf("Designation:%s",N->Design);
    printf("Branch Code:%d",N->Branch_Code);

    return 0;
}
