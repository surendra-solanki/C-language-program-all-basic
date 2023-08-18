#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[20], b[20];
    int x;
    printf("Enter your name: ");
    scanf("%s",a);
    printf("You have enter %s\n",a);
    x=strlen(a);
    strcpy(b,a);
    printf("b=%s\n",b);
    printf("string length=%d", x);

    return 0;
}
