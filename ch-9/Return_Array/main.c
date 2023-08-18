#include <stdio.h>
#include <stdlib.h>
int Fun1(int a[],int i);
//float Fun2(int a[],int i);
float Fun3(float Fun1,int i);

int main()
{
  int i,k;
  float l;

  printf("Number Enter ");
  scanf("%d",&i);
  int a[i];

  for(int j=0;j<i;j++)
  {
    printf("Enter value");
    scanf("%d",&a[j]);
  }

    k=Fun1(a,i);
    printf("\nSum is %d",k);

    //l=Fun2(a,i);
    //printf("\nAverage is %.2f",l);

    l=Fun3(Fun1(a,i),i);
    printf("\nAverage is %.2f",l);

    return 0;
}

int Fun1(int a[],int i)
{
    int sum = 0;
    for(int j=0;j<i;j++)
    {
     sum += a[j];
    }
    return sum;
}
/*
float Fun2(int a[],int i)
{
    float h,avg=0;
    for(int j=0;j<=i;j++)
    {
        h +=a[j];
    }
    avg = h/i;
    return avg;
}
*/

float Fun3(float Fun1,int i)
{
 float avg=Fun1/i;
 return avg;
}
