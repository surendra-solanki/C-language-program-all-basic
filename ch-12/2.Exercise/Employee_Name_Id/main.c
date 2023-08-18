//////51. WAP that accepts an employee's name and ID, total working
/////hours of a month and the amount he received per hour. Print the
/////employee's ID and salary of a particular month. (using structure)

#include <stdio.h>
#include <stdlib.h>

  struct DATA{
            char Name[25];
            char ID[7];
            float TWH;
            char Month[10];
            int SPH;
    };

int main()
{
    struct DATA E1;

    printf("\nEnter Name :");
    gets(E1.Name);

    printf("Enter ID :");
    scanf("%s",E1.ID);

    printf("Enter Total Working Hour of month :");
    scanf("%f",&E1.TWH);

    printf("Enter Month Name :");
    scanf("%s",E1.Month);

    printf("Enter Employee Salary Per Hour :");
    scanf("%d",&E1.SPH);

    printf("--------------------------------------------------\n");
    printf("Name: %s\n",E1.Name);
    printf("ID : %s\n",E1.ID);
    printf("TOTAL W.Hours : %.2f\n",E1.TWH);
    printf("Month : %s\n",E1.Month);
    printf("Salary Per Hour :%d\n",E1.SPH);
    printf("Total Amount :%.2f RS\n",E1.TWH*(float)E1.SPH);

    return 0;
}
