#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
   int array[]={'s','u','r','e','n','d','r','a'};
   printf("%c",array[7]);  //taking %d it will op asci value while taking %c it will give string
    return 0;
}
*/

/*
int main()
{
   int array[]={'s','u','r','e','n','d','r','a'};
   printf("%s",array+3);  //taking %s and print only with array variable then op will only first char of string or variable
    return 0;
}
*/


int main()
{
    char array[]={'s','u','r','e','n','d','r','a','\0'};
    printf("%s",array);  //taking %s and print only with array variable then op will only first char of string or variable
    return 0;
}
