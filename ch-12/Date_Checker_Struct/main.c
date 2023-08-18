#include <stdio.h>
#include <stdlib.h>

struct Today
{
  int Date[2];
  int Month[2];
  int Year[2];
};

int main()
{
    struct Today D;
    int count=0;
    printf("Enter Today Date\n");

    printf("Enter Date1: ");
    scanf("%d",&D.Date[0]);

    printf("Enter Month1: ");
    scanf("%d",&D.Month[0]);

    printf("Enter Year1: ");
    scanf("%d",&D.Year[0]);

    do{
        if(D.Date[0]<=31 && D.Month[0]<=12 && D.Year[0]<=2022)
        {
            count=3;
            break;
        }
        else if (D.Date[0]>32)
        {
           do{printf("Enter Date1: ");
            scanf("%d",&D.Date[0]);

            if(D.Date[0]<=31)
            {
                count++;
            }
           }while(count!=1);
        }

        else if (D.Month[0]>13)
        {
            do{printf("Enter Month1: ");
            scanf("%d",&D.Month[0]);

             if(D.Month[0]<=12)
            {
                count++;
            }
           }while(count!=2);
        }
        else if (D.Year[0]>2023)
        {
            do{printf("Enter Year1: ");
            scanf("%d",&D.Year[0]);

            if(D.Year[0]<=2022)
            {
                count++;
            }
           }while(count!=3);
        }

     }while(count!=3);  //main do while loop

     printf("Enter Today Date2\n"); //second half started
   count=0;
    printf("Enter Date2: ");
    scanf("%d",&D.Date[1]);

    printf("Enter Month2: ");
    scanf("%d",&D.Month[1]);

    printf("Enter Year2: ");
    scanf("%d",&D.Year[1]);

     do{
        if(D.Date[1]==D.Date[0] && D.Month[1]==D.Month[0] && D.Year[1]==D.Year[0])
        {
            count=3;
            break;
        }
        else if (D.Date[1]!=D.Date[0])
        {
           do{printf("Enter Date2: ");
            scanf("%d",&D.Date[1]);

            if(D.Date[1]==D.Date[0])
            {
                count++;
            }
           }while(count!=1);
        }

        else if (D.Month[1]!=D.Month[0])
        {
            do{printf("Enter Month2: ");
            scanf("%d",&D.Month[1]);

             if(D.Month[1]==D.Month[0])
            {
                count++;
            }
           }while(count!=2);
        }
        else if (D.Year[1]!=D.Year[0])
        {
            do{printf("Enter Year2: ");
            scanf("%d",&D.Year[1]);

            if(D.Year[1]==D.Year[0])
            {
                count++;
            }
           }while(count!=3);
        }

     }while(count!=3);

     if (count==3)
    {
       printf("\nDate:%d/%d/%d\n",D.Date[0],D.Month[0],D.Year[0]);
    }
      return 0;
}

/*
    do{
        if(D.Date[1]<=31 && D.Month[1]<=12 && D.Year[1]<=2022)
        {
            count=3;
            break;
        }
        else if (D.Date[1]>32)
        {
           do{printf("Enter Date2: ");
            scanf("%d",&D.Date[1]);

            if(D.Date[1]<=31)
            {
                count++;
            }
           }while(count!=1);
        }

        else if (D.Month[1]>13)
        {
            do{printf("Enter Month2: ");
            scanf("%d",&D.Month[1]);

             if(D.Month[1]<=12)
            {
                count++;
            }
           }while(count!=2);
        }
        else if (D.Year[1]>2023)
        {
            do{printf("Enter Year2: ");
            scanf("%d",&D.Year[1]);

            if(D.Year[1]<=2022)
            {
                count++;
            }
           }while(count!=3);
        }

     }while(count!=3);


         if(D.Date[0]!=D.Date[1])
        {
           do{
            printf("Enter Date2: ");
            scanf("%d",&D.Date[1]);
           }while(D.Date[0]==D.Date[1]);
        }
         else if(D.Month[0]!=D.Month[1])
        {
           do{
            printf("Enter Month2: ");
            scanf("%d",&D.Month[1]);
           }while(D.Month[0]==D.Month[1]);
        }
         else if(D.Year[0]!=D.Year[1])
        {
           do{
            printf("Enter Year2: ");
            scanf("%d",&D.Year[1]);
           }while(D.Year[0]==D.Year[1]);
        }
        else if(D.Date[0]==D.Date[1] && D.Month[0]==D.Month[1] && D.Year[0]==D.Year[1])
        {
            printf("\nDate:%d/%d/%d\n",D.Date[0],D.Month[0],D.Year[0]);
        }
*/

