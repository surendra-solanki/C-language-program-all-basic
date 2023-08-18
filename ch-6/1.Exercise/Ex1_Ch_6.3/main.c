////3. Write a program to print ‘A’+1, ‘a’+1, ‘z’+1, ‘Z’+1.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char variable01,variable02,variable03,variable04;
    printf("Enter Same Alphabet with first character Capital letter\n");
    scanf("%c\n%c\n%c\n%c",&variable01,&variable02,&variable03,&variable04);

    //printf("Enter Same Alphabet with first character Small letter\n");
    //scanf("%c\n%c",&variable03,&variable04);

    variable01 +=1;
    variable02 +=1;
    printf("\n%c and %c\n",variable01,variable02);

    variable03 +=1;
    variable04 +=1;
    printf("%c and %c\n",variable03,variable04);

    return 0;
}
