#include <stdio.h>
#include <stdlib.h>


void singleDimInt(void){

    printf("Running singleDimInt()\ n\n");

    unsigned int a1[10];
    for(int i = 0; i < 10; i++){
        a1[i] = i;
    }

    for(int i = 0; i < 10; i++){
        printf("\n%d::%u::%u", i, a1[i], &(a1[i]));
    }
    printf("\n\n");

    unsigned int *a2 = a1;

    for(int i = 0; i < 10; i++){
        printf("\n\t%d::%u::%u", i, *(a2 + i), (a2 + i));
    }
    printf("\n\n");
}

void singleDimChar(void){

    printf("Running singleDimChar() \n\n");
    unsigned char a1[10];
    for(int i = 0; i < 10; i++){
        a1[i] = i;
    }

    for(int i = 0; i < 10; i++){
        printf("\n%d::%u::%u", i, a1[i], &(a1[i]));
    }
    printf("\n\n");

    unsigned char *a2 = a1;

    for(int i = 0; i < 10; i++){
        printf("\n\t%d::%u::%u", i, *(a2 + i), (a2 + i));
    }
    printf("\n\n");
}


int main()
{
    singleDimInt();
    singleDimChar();
    return 0;
}
