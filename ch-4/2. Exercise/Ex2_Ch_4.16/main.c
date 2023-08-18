
//16. WAP that accepts five integers and find the maximum of five.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,m;
    printf("Enter Value for five integer\n");
    scanf("%d%d%d%d%d",&i,&j,&k,&l,&m);

    if((i>j)&&(i>k)&&(i>l)&&(i>m))
    {
        printf("Biggest Value is I %d",i);
    }
    else if((j>i)&&(j>k)&&(j>l)&&(j>m))
    {
        printf("Biggest Value is J %d",j);
    }
    else if((k>i)&&(k>j)&&(k>l)&&(k>l))
    {
        printf("Biggest Value is K %d",k);
    }
    else if((l>i)&&(l>j)&&(l>k)&&(l>m))
    {
        printf("Biggest Value is L %d",l);
    }
    else if((m>i)&&(m>j)&&(m>k)&&(m>l))
    {
         printf("Biggest Value is M %d",m);
    }

    return 0;
}
