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

do{count=0;
    printf("\nEnter ID:");
    gets(E.Id);
    for(int i=0;i<strlen(E.Id);i++)
    {
        if((E.Id[i]>='a'&& E.Id[i]<='z' )||(E.Id[i]>='A'&& E.Id[i]<='Z' ))
        {
        count++;
        }
    }
 }while(count!=0);

do{count=1;
    printf("\nEnter Name:");
    gets(E.Name);

    for(int i=0;i<strlen(E.Name);i++)
    {
        if(E.Name[i]>='0'&& E.Name[i]<='9')
        {
           count++;
        }
    }
}while(count!=1);

do{  count=2;
        printf("\nEnter Check_In:");
        gets(E.Check_In);

    if(E.Check_In[2]==':'&& E.Check_In[6]=='M'&&(E.Check_In[5]=='A')||E.Check_In[5]=='P')
    {
      count++;
    }
}while(count!=3);

 do{  count=3;
        printf("\nEnter Check_Out:");
        gets(E.Check_Out);

    if(E.Check_Out[2]==':'&& E.Check_Out[6]=='M'&&(E.Check_Out[5]=='A')||E.Check_Out[5]=='P')
    {
      count++;
    }
}while(count!=4);


switch(count)
    {
        case 4:printf("\n\nID:%s\n",E.Id);
                printf("\nName:%s\n",E.Name);
                printf("\nCheck In Time:%s\n",E.Check_In);
                printf("\nCheck Out Time:%s\n",E.Check_Out);
    }
return 0;
}


