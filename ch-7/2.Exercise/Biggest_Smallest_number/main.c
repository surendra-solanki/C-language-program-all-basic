///////30. WAP to find a biggest no. using function1 and smallest no. using function2 from five integer numbers.

#include <stdio.h>
#include <stdlib.h>
int Biggest_Num(int x,int y, int z,int i,int j,int D);
int Smallest_Num(int x,int y,int z,int i,int j,int S;);

int main()
{
    int x,y,z,i,j,l,k,S,D;
    printf("Enter Value for X and Y\n");
    scanf("%d\n%d\n%d\n%d\n%d",&x,&y,&z,&i,&j);
    l=Biggest_Num(x,y,z,i,j,D);
    printf("Biggest Number is %d\n",l);
    k=Smallest_Num(x,y,z,i,j,S);
    printf("Smallest number is %d",k);

    return 0;
}

int Biggest_Num(int x,int y,int z,int i,int j,int D)
{
    if((x>y)&&(x>z)&&(x>i)&&(x>j))
    {
     //printf("Biggest number is X=%d\n",x);
      D=x;
    }
    else if((y>x)&&(y>z)&&(y>i)&&(y>j))
    {
     //printf("Biggest number is Y=%d\n",y);
      D=y;
    }
    else  if((z>x)&&(z>y)&&(z>i)&&(z>j))
    {
     //printf("Biggest number is Z=%d\n",z);
      D=z;
    }
    else  if((i>x)&&(i>y)&&(i>z)&&(i>j))
    {
     //printf("Biggest number is I=%d\n",i);
      D=i;
    }
    else  if((j>x)&&(j>y)&&(j>z)&&(j>i))
    {
     //printf("Biggest number is J=%d\n",j);
      D=j;
    }
return D ;
}


int Smallest_Num(int x,int y,int z,int i,int j,int S)
{

    if((x<y)&&(x<z)&&(x<i)&&(x<j))
    {
     //printf("Smallest number is X=%d\n",x);
      S=x;
    }
    else if((y<x)&&(y<z)&&(y<i)&&(y<j))
    {
     //printf("Smallest number is Y=%d\n",y);
      S=y;
    }
    else  if((z<x)&&(z<y)&&(z<i)&&(z<j))
    {
     //printf("Smallest number is Z=%d\n",z);
      S=z;
    }
    else  if((i<x)&&(i<y)&&(i<z)&&(i<j))
    {
     //printf("Smallest number is I=%d\n",i);
      S=i;
    }
    else  if((j<x)&&(j<y)&&(j<z)&&(j<i))
    {
     //printf("Smallest number is J=%d\n",j);
      S=j;
    }
    return S;
}
