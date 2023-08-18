#include <stdio.h>
#include <stdlib.h>

struct Employee{
    char Id[10];
    char Name[10];
    char Check_In[10];
    char Check_Out[10];
};

int main()
{
    struct Employee E;
    int count=0;

    printf("\nEnter ID:");
    gets(E.Id);
    for(int i=0;i<strlen(E.Id);i++)
    {
        if((E.Id[i]>='a'&& E.Id[i]<='z' )||(E.Id[i]>='A'&& E.Id[i]<='Z' ))
        {
           count++;
        }

        if(count==1)
        {
        printf("Invalid ID");
        break;
        }
    }
    if(count==0)
        {
        printf("ID:%s",E.Id);
        }

    printf("\nEnter Name:");
    gets(E.Name);
    for(int i=0;i<strlen(E.Name);i++)
    {
        count=0;
        if(E.Name[i]>='0'&& E.Name[i]<='9')
        {
           count++;
        }

        if(count==1)
        {
        printf("Invalid Name");
        break;
        }
    }
    if(count==0)
    {
        printf("Name:%s",E.Name);
    }

    printf("\nEnter Check_In:");
    gets(E.Check_In);
    if(E.Check_In[2]==':'&& E.Check_In[6]=='M'&&(E.Check_In[5]=='A')||E.Check_In[5]=='P')
    {
        printf("Check In Time:%s",E.Check_In);
    }
    else
    {
        printf("Invalid Check In Time");
    }

    printf("\nEnter Check_Out:");
    gets(E.Check_Out);

    if(E.Check_Out[2]==':'&& E.Check_Out[6]=='M'&&(E.Check_Out[5]=='A')||E.Check_Out[5]=='P')
    {
        printf("Check Out Time:%s",E.Check_Out);
    }
    else
    {
        printf("Invalid Check Out Time");
    }

    return 0;
}
