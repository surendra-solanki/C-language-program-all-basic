///////47. WAP to read an array of length 6, change the first element by the last.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Str[6]="HELLP";
    char Str2;
    Str2=Str[4];
    Str[4]=Str[0];
    Str[0]=Str2;
    printf("%s",Str);
    return 0;
}
