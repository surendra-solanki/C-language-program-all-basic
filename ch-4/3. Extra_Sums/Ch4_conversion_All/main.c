#include <stdio.h>
#include <stdlib.h>
void D_to_Octal(int i);

void D_to_Hexa_Decimal(int i);
void D_to_Binary(int i);

int main()
{
    int i;
    printf("Enter Decimal Value ");
    scanf("%d",&i);
    D_to_Octal(i);

    D_to_Hexa_Decimal(i);
    D_to_Binary(i);
    return 0;
}

void D_to_Octal(int i)
{
    printf("Octal =%o\n",i);
}

void D_to_Hexa_Decimal(int i)
{
    printf("Hexa Decimal =%X\n",i);
}

void D_to_Binary(int i)
{
    int j;
        while(i>0)
    {
        j=i%2;
        printf("%d",j);
        i=i/2;
    }

}
