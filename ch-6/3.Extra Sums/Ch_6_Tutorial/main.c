#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x = 'a';
    printf("%d\n",x);   // Display Result = 97
    printf("%c\n",x);   // Display Result = a

     x = 'a' + 1 ;
    printf("%d\n",x);     // Display Result = 98 ( ascii of 'b' )

    //Way 3 : Displays Next ASCII value[ Note that %d in Printf ]
    x = 'a' + 1 ;
    printf("3=%d\n",x);     // Display Result = b ( ascii of 'b' )


    //Way 4 Displays Next Character value[Note that %c in Printf ]
     x = 'a' + 1;
    printf("4=%c\n",x); // Display Result = 'b'

    //Way 5 : Displays Difference between 2 ASCII in Integer[Note %d in Printf ]
     x = 'z' - 'a';
    printf("5=%d\n",x);
    /* Display Result = 25 (difference between ASCII of z and a ) */

    //Way 6 : Displays Difference between 2 ASCII in Char [Note that %c in Printf ]
     x = 'z' - 'a';
    printf("6=%c",x);


    return 0;
}
