#include <stdio.h>
#include <stdlib.h>
//void Voter(int a);
/*
int main()
{
    int a;
    printf("Enter Your Age");
    scanf("%d",&a);
    Voter(a);
    return 0;
}

void Voter(int a)
{


    if(a<18)
    {
    printf("You Are Under Age\nYou Is Not Eligible\n");
    }
    else if(a>60)
    {
    printf("You Are Above Age\nYou Are Not Eligible\n");
    }
     else
    {
        printf("You Are Eligible\nDo you Have Any Physical Problem\n");

            char var,var2;
            printf("Enter Y for Yes\nEnter N for No\n");
            scanf("\n%c",&var);
            if(var=='N')
            {
            printf("You Don't Have Any Physical Problem\n");

            }
            else if (var=='Y')
            {
            printf("You Have Physical Problem\nPlease Provide us Some Detail\n");
            printf("Enter E For Eye Problem\n");
            printf("Enter L For Leg Problem\n");
            printf("Enter H For Hand Problem\n");
            scanf("\n%c",&var2);
                if(var2=='E')
                {
                printf("As Per Your Application For 'Eye' Problem\nWe Will Help You,Thank You!\n");
                }
                else if(var2=='L')
                {
                printf("As Per Your Application For 'Leg' Problem\nWe Will Help You,Thank You!\n");
                }
                else if(var2=='H')
                {
                printf("As Per Your Application For 'Hand' Problem\nWe Will Help You,Thank You!\n");
                }
        }

    }

}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Voter_Id(int a);

int main()
{
    int a;
    printf("Enter Your Age_");
    scanf("%d",&a);
    Voter_Id(a);
    return 0;
}

void Voter_Id(int a)
{

    if(a<18)
    {
    printf("You Are Under Age\nYou Is Not Eligible\n");
    }
    else if(a>60)
    {
    printf("You Are Above Age\nYou Are Not Eligible\n");
    }
     else
    {
    printf("You Are Eligible\nDo you Have Any Physical Problem\n");

        char var,var2;
        printf("Enter Y for Yes\nEnter N for No\n");
        scanf("\n%c",&var);
        switch(var)
        {
        case 'N' : printf("You Don't Have Any Physical Problem\n");
                   break;
        case 'Y' : printf("You Have Apply For Physical Problem\n");
                   printf("Enter E For Eye Problem\n");
                   printf("Enter L For Leg Problem\n");
                   printf("Enter H For Hand Problem\n");
                   scanf("\n%c",&var2);
                   {
                   switch(var2)
                   {
                   case 'E':printf("As Per Your Application For 'Eye' Problem\nWe Will Help You,Thank You!\n");
                            break;
                   case 'L':printf("As Per Your Application For 'Leg' Problem\nWe Will Help You,Thank You!\n");
                            break;
                   case 'H':printf("As Per Your Application For 'Hand' Problem\nWe Will Help You,Thank You!\n");
                            break;
                   default :printf("You Have Enter Wrong Key\n");
                            break;
                   }
                   break;
                   }
        default : printf("You Have Enter Wrong Key\n");
                  break;
        }
    }
}
