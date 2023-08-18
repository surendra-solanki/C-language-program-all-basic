#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char var;
    printf(" Enter any two value for arithmetic\n");
    scanf("%d\n%d",&x,&y);
    printf("For Addition enter A\nFor Substraction enter S\nFor Multiplication enter M\nFor Division enter D\n");
    scanf("\n%c",&var);

    switch(var)
    {
     case 'A' : printf("Addition =%d",x+y);
                break;
     case 'S' : printf("Substraction =%d",x-y);
                break;
     case 'M' : printf("Multiplication =%d",x*y);
                break;
     case 'D' : printf("Division =%f",(float)x/y);
                break;
     default : printf("You Have Enter Differ than A-S-M-D Alphabet");
    }

    return 0;
}
