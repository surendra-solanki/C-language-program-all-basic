//////2. Make a structure to count interest of 12 months on amount of 1 lacrupees,
///////print interest of each month and total amount after 12 months.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct {
    int Amount,Month;
    float Int
    }P1;

    P1.Amount=100000;
    P1.Month=12;
    P1.Int = 2.5;

    printf("Interest of per Month is %.4f\n",((float)(P1.Amount*P1.Int)/100));
    printf("Interest of 12 Month is %.2f\n",((float)P1.Amount*P1.Int*(float)P1.Month)/100);
    return 0;
}
