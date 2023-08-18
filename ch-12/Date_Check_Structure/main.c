#include <stdio.h>
#include <string.h>

struct D1
{
  int Date[4];
  int Date2[4];
};
int main()
{
    struct D1 D;
    int count=0;
    printf("Enter Today Date\n");
    for(int i=0;i<4;i++)
    {
        if(i==0)
        {
            printf("Enter Date: ");
            scanf("%d",&D.Date[i]);
        }
         if(i==1 )
        {
            printf("Enter Month: ");
            scanf("%d",&D.Date[i]);
        }
        if(i==3)
        {
            printf("Enter Year: ");
            scanf("%d",&D.Date[i]);
        }
    }

    printf("Enter Today Date again\n");
    for(int i=0;i<4;i++)
    {
        if(i==0)
        {
            printf("Enter Date: ");
            scanf("%d",&D.Date2[i]);
        }
         if(i==1 )
        {
            printf("Enter Month: ");
            scanf("%d",&D.Date2[i]);
        }
        if(i==3)
        {
            printf("Enter Year: ");
            scanf("%d",&D.Date2[i]);
        }
    }
    if(D.Date[0]==D.Date2[0] && D.Date[1]==D.Date2[1] && D.Date[3]==D.Date2[3])
    {
        if(D.Date[0]<=31&&D.Date[1]<=12 &&D.Date[3]<=2022)
        {
         printf("%d/%d/%d",D.Date[0],D.Date[1],D.Date[3]);
        }
        else
        {
            printf("Invalid");
        }
    }
    else
        {
            printf("Not Match");
        }


    // if(D.Date[0]=='2'&& D.Date[1]=='2'&& D.Date[2]=='/'&&
    //    D.Date[3]=='0' && D.Date[4]=='9' && D.Date[5]=='/' &&
     //   D.Date[6]=='2' && D.Date[7]=='0' && D.Date[8]=='2' && D.Date[9]=='2')

    return 0;
}
