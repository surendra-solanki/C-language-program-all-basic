#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Size of Short = %d bytes\n",sizeof(short));  //2
  printf("Size of Int= %d bytes\n",sizeof(int));       //4
  printf("Size of Float= %d bytes\n",sizeof(float));   //4
  printf("Size of Double= %d bytes\n",sizeof(double)); //8
  printf("Size of Long = %d bytes\n",sizeof(long));    //4
  printf("Size of Long long int= %d bytes\n",sizeof(long long int));  //8
  printf("Size of Double Long= %d bytes\n",sizeof(double long));      //16
  return 0;
}
