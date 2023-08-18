#include <stdio.h>
#include <stdlib.h>


int main()   ///malloc for char
{
    int i;
    char *ptr,val;

     printf("\nEnter total number of character:");
     scanf("%d",&i);

    ptr=(char*)malloc(i*sizeof(char));

    for(int j=0;j<i;j++)
    {
        printf("Enter char:");
        scanf("\n%c",(ptr+j));
    }

    for(int j=0;j<i;j++)
    {
        printf("%c",*(ptr+j));
    }
    return 0;
}



/*
int main()   ////calloc for char
{
    int i;
    char val,*ptr;

     printf("\nEnter total number of character:");
     scanf("%d",&i);

    ptr=(char*)calloc(i,sizeof(char));

    for(int j=0;j<i;j++)
    {
        printf("Enter char:");
        scanf("\n%c",(ptr+j));
    }

    for(int j=0;j<i;j++)
    {
        printf("%c",*(ptr+j));
    }
    return 0;
}
*/

/*
#include <string.h>
 int main()   ////malloc for string
{
    int i;

     printf("\nEnter total number of character:");
     scanf("%d",&i);

    char val,*ptr;
    //ptr=(char*)malloc((i)*sizeof(char));
    ptr=(char*)calloc(i,sizeof(char));

    printf("Enter char:");
    scanf("\n%c",ptr);
    //gets(ptr);

    printf("\nfinal: %s\n",ptr);

    puts(ptr);
    free(ptr);
    return 0;
}
*/
