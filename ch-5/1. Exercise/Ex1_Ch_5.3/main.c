#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   // 3. Write a program: Take float variables i,j,k enter values of i, j and k.
   //Print maximum and minimum value using float function.
   float i,j,k;
   printf("Enter float value for I,J,K=");
   scanf("%f %f %f",&i,&j,&k);
   if(i>j)
   {
       if(i>k)
       {
           printf("The Biggest Number is I=%.3f\n",i);
       }
       else
       {
         printf("The Biggest Number is J=%.3f\n",j);
       }
   }
   else if (j>k)
   {
    printf("The Biggest Number is J=%.3f\n",j);
   }
   else
   {
    printf("The Biggest Number is K=%.3f\n",k);
   }
    return 0;
}

