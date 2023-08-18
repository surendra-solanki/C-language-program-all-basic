/////WAP that reads an integer between 1 and 12 and prints the month associated with the number.
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    char a[12][6] ={"Jan","Feb","March","April","May","June","July","Aug","Sept","Oct","Nov","Dec"};

    printf("Enter Number for month");
    scanf("%d",&i);
    printf("%s",a[i-1]);
    //printf("%c",a[0][0]);
    return 0;
}

/*
int main()
{
     int i;
    char a[12][6] ={"Jan","Feb","March","April","May","June","July","Aug","Sept","Oct","Nov","Dec"};

    printf("Enter Number for month");
    scanf("%d",&i);

    switch (i-1)
    {
        case 0 : printf("\n%s",a[0]);
                break;
        case 1 : printf("\n%s",a[1]);
                break;
        case 2 : printf("\n%s",a[2]);
                break;
        case 3 : printf("\n%s",a[i-1]);
                break;
        case 4 : printf("\n%s",a[i-1]);
                break;
        case 5 : printf("\n%s",a[i-1]);
                break;
        case 6 : printf("\n%s",a[i-1]);
                break;
        case 7 : printf("\n%s",a[i-1]);
                break;
        case 8 : printf("\n%s",a[i-1]);
                break;
        case 9 : printf("\n%s",a[i-1]);
                break;
        case 10 : printf("\n%s",a[i-1]);
                break;
        case 11 : printf("\n%s",a[i-1]);
                break;
        default: printf("You Enter Another key");
    }

    return 0;
}
*/
