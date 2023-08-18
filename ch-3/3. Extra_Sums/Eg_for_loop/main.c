#include <stdio.h>
#include <stdlib.h>

int even_number_loop();


int i ,j,add;
int sum = 0;

int main()
{
   printf("Enter value for i: ");
   scanf("%d",&i);
   even_number_loop();
   return 0;
}

 int even_number_loop()
{
       for(j=0;j<=i;j+=2)
   {
       sum += j;
   }
      printf(" sum = %d\n",sum);
      return 0;
}



 //if((i%2)== 0)
 //{
  //sun = (i=)
 //}
