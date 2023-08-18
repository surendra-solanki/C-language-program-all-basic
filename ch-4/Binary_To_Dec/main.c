#include <stdio.h>
#include <stdlib.h>
void Binary_Dec(int binary);

int main ()
{
    int binary;
    printf("Enter Binary Number\n");
    scanf("%d",&binary);
    Binary_Dec(binary);
    return 0;
}

void Binary_Dec(int binary)
{
  int rem,decimal=0,count =1;

    while(binary !=0)
    {
     rem= binary%10;
     decimal=decimal+rem*count;
     binary=binary/10;
     count=count*2;
    }
    printf("%d",decimal);
}
