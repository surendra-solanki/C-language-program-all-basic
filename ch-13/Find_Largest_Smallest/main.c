#include <stdio.h>
/*
void minMax(int arr[],int len,int*min,int*max)
{
    *min = *max =arr[0];
    printf("size: %d",sizeof(min));
    for(int i=1;i<len;i++)
    {
        if(arr[i]>*max)
            *max=arr[i];
        if(arr[i]<*min)
            *min=arr[i];
    }
}

int main()
{
    int a[]={23,4,98,7,1,28,74};
    int *min,*max;

    int len=sizeof(a)/sizeof(a[0]);
    minMax(a,len,&min,&max);
    printf("Min:%d, Max:%d",min,max);
    return 0;
}
*/

int main()  //without pointer
{
    int a[]={74,50,20,15,7};
    int min,max;
      min = max = a[0];

    for(int i=1;i<5;i++)
    {
        if(a[i]<min)
            min = a[i];
        if(a[i]>max)
            max = a[i];
    }

    printf("min = %d, max =%d",min,max);
    return 0;
}
