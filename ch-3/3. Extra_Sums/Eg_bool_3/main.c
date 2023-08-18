#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool call_bool (int x,int y)
{
    bool z;
   if(x>y)
 {
    z=true;
 }
    else
 {
    z = false;
 }
    return z;
 }


int main()
{
    int x,y;
    printf("Enter value for x and y: \n");
    scanf("%d %d",&x,&y);
    call_bool(x,y);
    return 0;
}


