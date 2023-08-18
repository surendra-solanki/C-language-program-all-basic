//////27. WAP to calculate a bike’s average in function: total distance traveled 450 km and spent fuel 5 litre .

#include <stdio.h>


float Average_Funct(float x,float y);

int main()
{
    float x,y,z;
    printf("Enter distance travelled in (Km)\n");
    scanf("%f",&x);
    printf("Enter spent fuel in (litres)\n");
    scanf("%f",&y);

    z=Average_Funct(x,y); ///x for distance and y for litres
    printf("%f",y);
    return 0;
}

float Average_Funct(float x,float y)
{
    return x/y;
}


/*float Avg_Funct(int x, int y);
int main()
{
    int x,y;
    printf("Enter distance travelled in (Km)\n");
    scanf("%d",&x);
    printf("Enter spent fuel in (litres)\n");
    scanf("%d",&y);

    float z = Avg_Funct(x,y);
    printf("%f",z);

    return 0;
}

float Avg_Funct(int x, int y)
{
  return (float)x/(float)y;
}
*/
