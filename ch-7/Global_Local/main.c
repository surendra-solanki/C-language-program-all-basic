#include <stdio.h>

int Fun_Call(int var);

int var;

int main()
{
    int var=9;
    //printf("Local %d\n",var++);
    {
      int var=6;
       //Fun_Call(var);
        printf("Global %d\n",var);
    }
    printf("Globaliy %d\n",var);
    return 0;
}

int Fun_Call(int var)
{
    printf("Fun %d\n",var);
    return 0;
}
