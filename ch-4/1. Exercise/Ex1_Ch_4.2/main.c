#include <stdio.h>
#include <stdlib.h>
void AND_Bitwise ();
void OR_Bitwise ();
void NOT_Bitwise ();
void XOR_Bitwise ();

int x,y;
int main()
{
    // Write a program to perform bitwise AND, OR, NOT and XOR
    //operations and print it.
    printf("Enter value for x and y: \n");
    scanf("%d %d",&x,&y);
    AND_Bitwise ();
    OR_Bitwise ();
    NOT_Bitwise ();
    XOR_Bitwise ();
    return 0;
}

void AND_Bitwise ()
{
    printf("AND BITWISE of X and Y is %d\n",x&y);
}
void OR_Bitwise ()
{
    printf("OR BITWISE of X and Y is %d\n",x|y);
}
void NOT_Bitwise ()
{
    printf("NOT BITWISE of X is %d\n",~x);
    printf("NOT BITWISE of Y is %d\n",~y);
}
void XOR_Bitwise ()
{
    printf("XOR BITWISE of X and Y is %d\n",x^y);
}
