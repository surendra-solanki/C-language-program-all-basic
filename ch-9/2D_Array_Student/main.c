#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;                           /////i= student ,j=subject

    printf("Enter the number of student = ");
    scanf("%d",&i);
    printf("Enter the number of subject = ");
    scanf("%d",&j);

    char name[i][10];
    int a[i][j];
    //int data[i][j];

   // for(int x=0;x<1;x++)
    //{

        for(int k=0;k<i;k++)
        {
            printf("Enter the student %d detail",k+1);
            printf("\nEnter the name = ");
            scanf("%s",&name[k]);

            for(int m=0;m<j;m++)
            {
                printf("Subject %d marks = ",m+1);
                scanf("%d",&a[k][m]);
            }
        }
        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
        for(int y=0;y<i;y++)
        {
            float sum =0;
            printf("\nStudent %d\t\t\tName%s",y+1,name[y]);
            int x=0;
            for(int z=0;z<j;z++)
            {

                if(a[y][z]>28)
                {
                 printf("\nSubject %d Marks is :: %d ::%s",y+1,a[y][z],"PASS");
                }
                else
                {
                 printf("\nSubject %d Marks is :: %d ::%s",y+1,a[y][z],"FAIL");
                 x++;
                }

                //data[y][z]=a[y][z];
                sum+=a[y][z];
            }
                printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
                printf("\nTotal = %d\t\t\tPercentage %.2f",(int)sum,sum/j);

                    if(x==0)
                    {
                        printf("\n%s is fully passes ",name[y]);
                        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
                    }
                    else if(x>0)
                    {
                        printf("\nSORRY %s you are not fully passsed",name[y]);
                        printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
                    }

        }
    return 0;
}
