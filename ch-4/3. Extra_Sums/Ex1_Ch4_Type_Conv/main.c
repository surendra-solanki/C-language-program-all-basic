#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Enter Value");
    scanf("%d",&i);
    float k=i+.5;  //impicity type conversion
    printf("Implict %.4f\n",k);
    printf("Explicit %.4f\n",(float)i);
    printf("Char Value %c",(char)i);
    return 0;
}
