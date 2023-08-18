#include <stdio.h>
#include <string.h>

struct Employee{
    char Id[10];
    char Name[10];
    char Check_In[10];
    char Check_Out[10];
};

void Fun1(int count,struct Employee E2);

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
        if(count>0)
        {
        count=5;
        Fun1(count,E);
        break;
        }
    }
 }while(count!=0);
  Fun1(count,E);

do{count=1;
    printf("\nEnter Name:");
    gets(E.Name);

    for(int i=0;i<strlen(E.Name);i++)
    {
        if(E.Name[i]>='0'&& E.Name[i]<='9')
        {
           count++;
        }
         if(count>1)
        {
        count=6;
        Fun1(count,E);
        break;
        }
    }
}while(count!=1);
Fun1(count,E);

do{  count=2;
        printf("\nEnter Check_In:");
        gets(E.Check_In);

    if(E.Check_In[2]==':'&& E.Check_In[6]=='M'&&(E.Check_In[5]=='A')||E.Check_In[5]=='P')
    {
      count++;
    }
    if(count==2)
    {
        count=7;
        Fun1(count,E);
    }
}while(count!=3);
 Fun1(count,E);

 do{  count=3;
        printf("\nEnter Check_Out:");
        gets(E.Check_Out);

    if(E.Check_Out[2]==':'&& E.Check_Out[6]=='M'&&(E.Check_Out[5]=='A')||E.Check_Out[5]=='P')
    {
      count++;
    }
    if(count==3)
    {
        count =8;
       Fun1(count,E);
    }
}while(count!=4);
 Fun1(count,E);

Fun1(9,E);
return 0;
}

void Fun1(int count,struct Employee E2)
{
    switch(count)
    {
        case 0:printf("\nID:%s\n",E2.Id);
                break;
        case 1:printf("\nName:%s\n",E2.Name);
                break;
        case 3:printf("\nCheck In Time:%s\n",E2.Check_In);
                break;
        case 4:printf("\nCheck Out Time:%s\n",E2.Check_Out);
                break;
        case 5:printf("Invalid ID");
                break;
        case 6:printf("Invalid Name");
                break;
        case 7:printf("Invalid In Time");
                break;
        case 8: printf("Invalid Out Time");
                break;
        default:printf("\n\nID:%s\n",E2.Id);
                printf("\nName:%s\n",E2.Name);
                printf("\nCheck In Time:%s\n",E2.Check_In);
                printf("\nCheck Out Time:%s\n",E2.Check_Out);
    }
}



