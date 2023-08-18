/*
#include <stdio.h>
//#include <stdlib.h>

int main()
{
    for(int i=0;i<5;i++)
    {
     printf("Hey Duniya123!\n");
    ;}

    printf("Hey Duniya!\n");
    return 0;
}
*//////////////
// C program to illustrate
// char const *p

// C program to illustrate
//const char * const ptr
#include<stdio.h>
#include<stdlib.h>

int var = 5;
int main()
{
    unsigned int var = 10;
	printf("var =%d\n",~var);

	char _ ='A', b ='B';
	const char *const ptr = &_;

	printf( "Value pointed to by ptr: %c\n", *ptr);
	printf( "Address ptr is pointing to: %d\n\n", ptr);

	// ptr = &b; illegal statement (assignment of read-only variable ptr)
	// *ptr = b; illegal statement (assignment of read-only location *ptr)



}


