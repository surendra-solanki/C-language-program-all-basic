#include <stdio.h>
#include <stdlib.h>

int main()
{
     char store;
    printf("Enter alphabet ");
    scanf("%c",&store);

    if((store>='A')&&(store<='Z'))
    {
     printf("\nYou Enter %c and now its become %c\n",store,(store+32));
    }
    else
    {
    printf("\nYou Enter %c and now its become %c\n",store,(store-32));
    }
  return 0;
}


    /*
    if((store>='A')&&(store<='Z'))
    {
     for(New=store;New<='Z';New++)
    {
        Add =New+32;
        printf("%c",Add);
    }
    }

    printf("\n");

    for(New='a';New<='z';New++)
    {
        Sub =New-32;
        printf("%c",Sub);
    }

    */
