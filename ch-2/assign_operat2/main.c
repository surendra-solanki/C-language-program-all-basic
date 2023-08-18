#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
int x = 7;
int y = 5;
float z = 6.5;
float w = 5.5;


//simple assignment
//x=10; //x= x+y;
printf("simple = %d\n",x);

  //multi
printf("multi = %d\n", x*y);

 //division
printf("div = %.2f\n",z/w);

 //remainder
printf("remainder = %d\n",x%y);

 //add
printf("Add = %d\n", x+y);

 //sub
printf("Sub = %d\n",x-y);

x<<=y; //left shift
printf("left shift = %d\n",x);

x>>=y; //right shift
printf("right shift = %d\n",x);

x=x&&y; //And logic
printf("And= %d\n",x);

x=x||y; //Or logic
printf("Or= %d\n",x);

x^=y; //xor
printf("Xor= %d\n",x);

x = (~x); //not
printf("Not= %d\n",x);

    return 0;
}
