#include <stdio.h>


/*
void Loop_I();
void Loop_J();
void Loop_K();

int main()
{
    Loop_I();
    printf("\n");
    Loop_J();
    printf("\n");
    Loop_K();
    printf("\n");
    Loop_J();
    printf("\n");
    Loop_I();

    return 0;
}
void Loop_I()
{
   for(int i=1;i<=4;i++)
 {
     printf("*");
 }
}

void Loop_J()
{

  for(int j=1;j<=1;j++)
  {
     printf("*");
  }
}

void Loop_K()
{
 for(int k=1;k<=3;k++)
  {
     printf("*");
  }
}
*/




int main()
{
    int n,i,j;
    printf("Enter Even value\n");   //print letter E
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0||j==0||i==n||i==n/2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}

