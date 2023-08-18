////45. WAP to count the number of letters in your name and print it.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Name[20];
    int count=0;
    printf("Enter Name: ");
    gets(Name);
    for(int i=0;i<strlen(Name);i++)
    {
        if(Name[i]!=32)
        {
            count++;
        }
    }
    printf("\nNumber Of letter %d\n",count);
    puts(Name);
    return 0;
}
