#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Name[20];
    char New[20];
    int countUp=0,countLow=0;
    printf("Enter Your Name : ");
    gets(Name);
    {
    for(int i=0;i<strlen(Name);i++)
    {
        if(Name[i]==' ')
        {
            New[i]=Name[i];
        }

        if(Name[i]>='A' && Name[i]<='Z')
        {
            New[i]=Name[i]+32;
            countLow++;
        }

         if(Name[i]>=97 && Name[i]<=122)
        {
            New[i]=Name[i]-32;
            countUp++;
        }
    }
    }

    puts(New);
    printf("Number Of Upper Case Convert is %d \nNumber Of Lower Case Convert is %d\n",countUp,countLow);
    return 0;
}
