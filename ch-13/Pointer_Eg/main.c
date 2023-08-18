#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int i=10;
    int *p,*q;
    p=&i;
    *q=*p;   //for both p=q and *p=*q answer will be same.
    printf("%d,%d",*p,*q);  // op=10,10
    return 0;
}
*/

/*
int main()
{
    int i=1;
    int *q,*p=&i;
    q=p;

    // *q=5;
    *p=8;
    printf("%d",*q); //op is 5 but why.
}
*/

/*
int main()
{
    int i=1;
    int q,p=i;
    q=p;
    q=5;
    printf("%d",p); //answer will be 1.
}
*/

/*
int main()
{
    int var=10;
    int *ptr=&var;
    *ptr = 20;
    printf("*ptr :%d\n",var); ///op=20
    int **ptr1=&ptr;
    **ptr1=30;
    printf("**Ptr: %d",var); ///op=30
    printf("WSDSHGV: %d",sizeof(ptr1));
    return 0;
}
*/

/*
int main()
{

    int *i;
    int a[]={23,56};
    i=&a;
    for(i=&a[0];i<&a[2];i++)
    {
        printf("\n element :%d",*i); //op=23,56
    }
}
*/

/*
int main()
{

    int *i,sum=0;
    int a[]={23,56};
    i=&a;
    for(i=&a[0];i<&a[2];i++)
    {
        sum += *i;
        printf("\n num1 :%d",*&a[0]);
        printf("\n num2 :%d",*&a[1]);
        printf("\n sum :%d",sum); //op=23,79 so it will give sum of all array element
    }
}
*/

/*
int main()
{
    int A[4]={7,5,12,25},*ptr,**ptr1;
    ptr=A;
    ptr1=&ptr;

    for(int i=0;i<4;i++)
    {
      printf("\nPtr1 is : %d",*(*ptr1+i)); ///only talentd ppl know
      printf(" add: %d",ptr1+i);
    }

    return 0;
}
*/

/*
int main()
{
    int a=5,*ptr,**ptr1;
    ptr=&a;
    ptr1=&ptr;
    printf("val: %d",**ptr1);

    return 0;
}*/

/*
int main()
{
    int a[]={23,56};
    int *i;
    i=&a;
    i=(int*)malloc(2*sizeof(int));
    printf("%d",sizeof(i));
}
*/


// Program to calculate the sum of n numbers entered by the user

int main() {
  int n, i, *ptr, sum = 0;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  //ptr = (int*) malloc(n * sizeof(int));  ///for malloc
  ptr = (int*) calloc(n , sizeof(int));

  // if memory cannot be allocated
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

  for(i = 0; i < n; ++i)
  {
    printf("Enter value:");
    scanf("%d", ptr + i);
  }

  for(int j=0;j<n;j++)
  {
    printf("You Enter Value:%d\n",*(ptr+j));
    sum += *(ptr + j);
  }
 printf("Sum = %d\n", sum);

  printf("\nEnter new number for additionals elements:"); //////new value start
  scanf("%d",&n);
  sum=0;
  ptr = (int*) realloc(ptr ,n* sizeof(int));

  for(i = 0; i < n; ++i)
  {
    printf("Enter value:");
    scanf("%d", ptr + i);
  }

  for(int j=0;j<n;j++)
  {
    printf("You Enter Value:%d\n",*(ptr+j));
     sum += *(ptr + j);
  }
 printf("Sum = %d\n", sum);


  // deallocating the memory
  free(ptr);

  return 0;
}
