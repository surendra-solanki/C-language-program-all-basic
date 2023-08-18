#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
    char Name[10];
    char Id[5];
    char Check_In[10];
    char Check_Out[10];
};

int main()
{
    struct Employee E;
    int count=0;

State1: printf("\nEnter Name:");
        gets(E.Name);
    for(int i=0;i<strlen(E.Name);i++)
    {
        if((E.Name[i]>='a'&& E.Name[i]<='z')||(E.Name[i]>='A'&& E.Name[i]<='Z'))
        {
           count++;
        }
    }

    if(strlen(E.Name)==count)
        {
            printf("Name:%s\n",E.Name);
            count=0;
        }
        else
        {
            printf("Invalid Name\n");
            count=0;
           goto State1;
        }

State2: printf("\nEnter Id:");
        gets(E.Id);

    for(int j=0;j<strlen(E.Id);j++)
    {
           if(E.Id[j]>='0'&& E.Id[j]<='9')
            {
                count++;
            }
    }

    if(strlen(E.Id)==count)
    {
        printf("ID:%s\n",E.Id);
        count=0;
    }
    else
    {
        printf("Invalid Id\n");
        count=0;
       goto State2;
    }

State3: printf("\nEnter Check-In Time:");
        gets(E.Check_In);

    for(int k=0;k<strlen(E.Check_In);k++)
    {
        if(E.Check_In[k]==':')
            count++;
        if((E.Check_In[k]=='A')||(E.Check_In[k]=='P'))
            count++;
        if(E.Check_In[k]=='M')
            count++;
        if(E.Check_In[k]>='0' && E.Check_In[k]<='9')
            count++;
    }

    if(7==count)
    {
        printf("Check_In Time:%s\n",E.Check_In);
        count=0;
    }
    else
    {
        printf("Invalid Check In Time\n");
        count=0;
        goto State3;
    }

State4: printf("\nEnter Check-Out Time:");
        gets(E.Check_Out);

    for(int k=0;k<strlen(E.Check_Out);k++)
    {
        if(E.Check_Out[k]==':')
            count++;
        if((E.Check_Out[k]=='A')||(E.Check_Out[k]=='P'))
            count++;
        if(E.Check_Out[k]=='M')
            count++;
        if(E.Check_Out[k]>='0' && E.Check_Out[k]<='9')
            count++;
    }

    if(7==count)
    {
        printf("Check_Out Time:%s\n",E.Check_Out);
        count=0;
    }
    else
    {
        printf("Invalid Check Out Time\n");
        count=0;
        goto State4;
    }
    return 0;
}
