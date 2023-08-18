///////3. Write a program to make a calculator for logical operations, AND, OR, NOT using switch case.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Enter value for X and Y\n");
    scanf("%d\n%d",&x,&y);

    printf("Enter 1 for And logic\nEnter 2 for OR logic\nEnter 3 for Not logic\n");
    scanf("%d",&z);
    switch (z)
    {
     case 1 : printf("AND logic is %d\n",(x&&y));
              printf("AND logic is %d\n",(x&y));
              break;
     case 2 : printf("OR logic is %d\n",(x||y));
              printf("OR logic is %d\n",(x|y));
              break;
     case 3 : printf("NOT logic is %d\n",(!(x&&y)));
              printf("NOT logic is %d\n",(!(x&y)));
              break;
    default : printf("Rather than 1 2 3 you enter another number ");
    }

    return 0;
}

