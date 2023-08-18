//////compare two date =complete
#include <stdio.h>
#include <stdlib.h>

struct Today
{
  int Date;
  int Month;
  int Year;
};

int main()
{
    struct Today D;
    int count=0;
    printf("Enter Today Date\n");

    printf("Enter Date1: ");
    scanf("%d",&D.Date);

    printf("Enter Month1: ");
    scanf("%d",&D.Month);

    printf("Enter Year1: ");
    scanf("%d",&D.Year);

     do{
        if(D.Date<=31 && D.Month<=12 && D.Year<=2022)
        {
            count=3;
            break;
        }
        else if (D.Date>31)
        {
           do{printf("Enter Date1: ");
            scanf("%d",&D.Date);

            if(D.Date<=31)
            {
                count++;
            }
           }while(count!=1);
        }

        else if (D.Month>12)
        {
            do{printf("Enter Month1: ");
            scanf("%d",&D.Month);

             if(D.Month<=12)
            {
                count=2;
            }
           }while(count!=2);
        }
        else if (D.Year>2022)
        {
            do{printf("Enter Year1: ");
            scanf("%d",&D.Year);

            if(D.Year<=2022)
            {
                count=3;
            }
           }while(count!=3);
        }

     }while(count!=3);  //main do while loop
     printf("\nDate1:%d/%d/%d",D.Date,D.Month,D.Year);

     struct Today S;
    count=0;
    printf("\nEnter Today Date2\n");

    printf("Enter Date2: ");
    scanf("%d",&S.Date);

    printf("Enter Month2: ");
    scanf("%d",&S.Month);

    printf("Enter Year2: ");
    scanf("%d",&S.Year);

     do{
        if(S.Date<=31 && S.Month<=12 && S.Year<=2022)
        {
            count=3;
            break;
        }
        else if (S.Date>31)
        {
           do{printf("Enter Date2: ");
            scanf("%d",&S.Date);

            if(S.Date<=31)
            {
                count++;
            }
           }while(count!=1);
        }

        else if (S.Month>12)
        {
            do{
            printf("Enter Month2: ");
            scanf("%d",&S.Month);

             if(S.Month<=12)
            {
                count=2;
            }
           }while(count!=2);
        }
        else if (S.Year>2022)
        {
            do{printf("Enter Year2: ");
            scanf("%d",&S.Year);

            if(S.Year<=2022)
            {
                count=3;
            }
           }while(count!=3);
        }

     }while(count!=3);    //both date are store

     printf("\nDate2:%d/%d/%d",S.Date,S.Month,S.Year);

      if(D.Date==S.Date && D.Month==S.Month && D.Year==S.Year)  //both date1 and date2 will compare
      {
        printf("\nBoth Are Same Date:%d/%d/%d",D.Date,D.Month,D.Year);
      }
      else
      {
          printf("\nBoth Date Are Not Same");
      }
    return 0;
}
