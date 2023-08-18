#include <stdio.h>
struct person Fun();

struct person{
   char Name[10];
   int Id;
}p;



int main()
{
    struct person p;
    p=Fun();
    printf("Name:%s\n",p.Name);
    printf("Id:%d",p.Id);
    return 0;
}

struct person Fun()
{
  printf("Name: ");
  scanf("%s",p.Name);
  printf("ID: ");
  scanf("%d",&p.Id);
  return p;
};

