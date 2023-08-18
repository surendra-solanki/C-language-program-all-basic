#include <stdio.h>
#include <stdlib.h>

struct Today
{
  int Date[3];
  int Month[3];
  int Year[3];
};
int main()
{
   struct Today D;
    int count=0;
    printf("Enter Today Date\n");

    for(int x=0;x<2;x++)
    { count=0;
         do{printf("Enter Date%d: ",x+1);
            scanf("%d",&D.Date[x]);

            printf("Enter Month%d: ",x+1);
            scanf("%d",&D.Month[x]);

            printf("Enter Year%d: ",x+1);
            scanf("%d",&D.Year[x]);

            if(D.Date[x]<=31 && D.Month[x]<=12 && D.Year[x]<=2022)
            {
               count++;
            }
            if(x==1)
            {
                if(D.Date[0]!=D.Date[1] && D.Month[0]!=D.Month[1] && D.Year[0]!=D.Year[1])
                {
                count--;
                }
            }
        }while(count!=1);
    }

         if(D.Date[0]==D.Date[1] && D.Month[0]==D.Month[1] && D.Year[0]==D.Year[1])
        {
            printf("\nDate:%d/%d/%d\n",D.Date[0],D.Month[0],D.Year[0]);
        }
/*
    if(D1.Date==D2.Date && D1.Month==D2.Month && D1.Year==D2.Year)
    {
     if(D1.Date<=31 && D1.Month<=12 && D1.Year<=2022)
     {
         printf("Date:%d/%d/%d",D1.Date,D1.Month,D1.Year);
     }
    }
*/
    return 0;
}
