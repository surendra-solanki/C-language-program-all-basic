#include <stdio.h>

union abc{
    int a;
    char b;
}var;

int main()
{

    var.a=65;
    var.b='C';
    var.a=65;
    printf("a=%d and  b=%c",var.a,var.b);//it will take updated value and for all variable in union function.
    return 0;
}

/*
union abc{
    int a;
    char b;
};

int main ()
{

    union abc var;
    var.a=90;
    union abc*p=&var;
    printf("%d,%c",p->a,p->b);  ////for pointer union same as structure
    return 0;
}
*/
