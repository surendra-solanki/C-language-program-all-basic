#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =42;

    printf("x is %d, which is boolean %d.\n", x, !!x);              //1
	printf("x is %d, which is boolean %d.\n", x, (x == 0 ? 0 : 1)); //1
	printf("x is %d, which is boolean %d.\n", x, x != 0);           //1

	x = 0;
	// Following statements are equivalent:
	printf("x is %d, which is boolean %d.\n", x, !!x);               //0
	printf("x is %d, which is boolean %d.\n", x, (x == 0 ? 0 : 1));  //0
	printf("x is %d, which is boolean %d.\n", x, x != 0);            //0


    //int values;
    printf("\n\n int for (i) FS Bytes= %i\n",sizeof(int));
   // printf("Bytes= %i\n\n",sizeof(values));

    printf("int for (d) FS= %d\n",sizeof(int));
    //printf("Bytes= %d\n\n",sizeof(values));

    printf("int for (u) FS= %u\n",sizeof(int));
    //printf("Bytes= %u\n",sizeof(values));

    printf("Float= %d\n",sizeof(float));
    printf("Short= %d\n",sizeof(short));
    printf("Short int = %d\n",sizeof(int short));
    //printf("Short char = %c\n",sizeof(short char));
    //printf("long Short = %d\n",sizeof(long short));
    printf("Long int = %ld\n",sizeof(long int));
    printf("Double= %ld\n",sizeof(double));
    printf("Long Double= %ld\n",sizeof(long double));
    printf("Double Long= %ld\n",sizeof(double long));
    return 0;
}
