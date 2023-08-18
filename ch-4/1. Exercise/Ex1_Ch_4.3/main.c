#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a program to print 1 to 10 digits for float, octal, hexadecimal
    //no.s.
   long long int i;
  // double i;
   //long float Digits;
    printf("Enter 10 Digit Number\n");
    scanf("%lld",&i);
    printf("Double Float Value %.5llf\n",(double)i);
    printf("For Hexadecimal = %X\n",i);
    printf("For Octal = %o\n",i);
    printf("Size of Long Long Int =%d",sizeof(i));
    return 0;
}
