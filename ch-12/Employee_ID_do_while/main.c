#include <stdio.h>
#include <string.h>

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

do {count=0;
        printf("\nEnter ID:");
        gets(E.Id);
    for(int i=0;i<strlen(E.Id);i++)
    {
        if((E.Id[i]>='a'&& E.Id[i]<='z' )||(E.Id[i]>='A'&& E.Id[i]<='Z' ))
        {
           count++;
        }
        if(count>0)
        {
        printf("Invalid ID");
        break;
        }
    }
}while(count!=0);
        if(count==0)
        {
          printf("\nID:%s\n",E.Id);
        }


do{   count=0;
        printf("\nEnter Name:");
        gets(E.Name);

    for(int i=0;i<strlen(E.Name);i++)
    {
        if(E.Name[i]>='0'&& E.Name[i]<='9')
        {
           count++;
        }
         if(count>0)
        {
        printf("Invalid Name");
        break;
        }
    }
}while(count!=0);
       if(count==0)
        {
        printf("\nName:%s\n",E.Name);
        }

do{  count=0;
        printf("\nEnter Check_In:");
        gets(E.Check_In);

    if(E.Check_In[2]==':'&& E.Check_In[6]=='M'&&(E.Check_In[5]=='A')||E.Check_In[5]=='P')
    {
      count++;
    }
    if(count==0)
    {
        printf("Invalid In Time");
    }
}while(count!=1);
    if(count==1)
    {
        printf("\nCheck In Time:%s\n",E.Check_In);
    }

do{  count=0;
        printf("\nEnter Check_Out:");
        gets(E.Check_Out);

    if(E.Check_Out[2]==':'&& E.Check_Out[6]=='M'&&(E.Check_Out[5]=='A')||E.Check_Out[5]=='P')
    {
      count++;
    }
    if(count==0)
    {
        printf("Invalid Out Time");
    }
}while(count!=1);
    if(count==1)
    {
        printf("\nCheck Out Time:%s\n",E.Check_Out);
    }
    return 0;
}
