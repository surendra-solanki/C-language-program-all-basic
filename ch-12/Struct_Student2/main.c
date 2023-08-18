#include <stdio.h>
#include <stdlib.h>

 struct data{
    char Name[10];
    int Roll_No;
    };

int main()
{
    struct data S ={.Name="M.S.DHONI",.Roll_No=7};
    printf("\nName:%s",S.Name);
    printf("\nRoll No:%d",S.Roll_No);
    return 0;
}
