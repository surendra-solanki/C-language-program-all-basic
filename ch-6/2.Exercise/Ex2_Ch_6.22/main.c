////////22. WAP to shift given data by two bits to the left.

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int var1,var2;
   printf("Enter any two Alphabet\n");
   scanf("%d\n%d",&var1,&var2);
   printf("\nLeft Shift %d",(var1<<var2));
   printf("\nRight Shift %d\n",(var1>>var2));
   printf("\nDate:%s",__DATE__);
   printf("\nTime:%s",__TIME__);
   return 0;
}
