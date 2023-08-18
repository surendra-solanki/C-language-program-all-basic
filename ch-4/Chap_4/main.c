#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <limits.h>

int main()
{
    printf("Chap04.c!\n");

//Integer -> int
    int intVariable01;
    int intVariable02 = 100;
    int intVariable03 = -20;

    printf("\nSize of int is %d", sizeof(intVariable01));
    //Print the number
    printf("\n1. intVariable02 -> %d", intVariable02);
    printf("\n2. intVariable03 -> %d", intVariable03);

    //Printing the integer as a hex
    printf("\n3. intVariable02 -> %x", intVariable02);
    printf("\n4. intVariable03 -> %x", intVariable03);
    printf("\n5. intVariable02 -> %X", intVariable02);
    printf("\n6. intVariable03 -> %X", intVariable03);
    //Printing the integer as an octal
    printf("\n7. intVariable02 -> %o", intVariable02);
    printf("\n8. intVariable03 -> %o", intVariable03);
    //Printing the integer as an octal
    printf("\n9. intVariable02 -> %u", intVariable02);
    printf("\n10. intVariable03 -> %u", intVariable03);

//short integer -> short
    short shortVariable01;
    short shortVariable02 = 100;
    short shortVariable03 = -20;

    printf("\nSize of short is %d", sizeof(shortVariable01));
    //Print the number
    printf("\n11. intVariable02 -> %d", shortVariable02);
    printf("\nintVariable03 -> %d", shortVariable03);

    //Printing the integer as a hex
    printf("\n12. intVariable02 -> %x", shortVariable02);
    printf("\n13. intVariable03 -> %x", shortVariable03);
    printf("\n14. intVariable02 -> %X", shortVariable02);
    printf("\n15. intVariable03 -> %X", shortVariable03);
    //Printing the integer as an octal
    printf("\n16. intVariable02 -> %o", shortVariable02);
    printf("\n17. intVariable03 -> %o", shortVariable03);
    //Printing the integer as an octal
    printf("\n18. intVariable02 -> %u", shortVariable02);
    printf("\n19. intVariable03 -> %u", shortVariable03);


//long integer -> long
    long longVariable01;
    long longVariable02 = 100;
    long longVariable03 = -20;

    printf("\nSize of long is %d", sizeof(longVariable01));
    //Print the number
    printf("\n20. intVariable02 -> %d", longVariable02);
    printf("\n21. intVariable03 -> %d", longVariable03);

    //Printing the integer as a hex
    printf("\nintVariable02 -> %x", longVariable02);
    printf("\nintVariable03 -> %x", longVariable03);
    printf("\nintVariable02 -> %X", longVariable02);
    printf("\nintVariable03 -> %X", longVariable03);
    //Printing the integer as an octal
    printf("\nintVariable02 -> %o", longVariable02);
    printf("\nintVariable03 -> %o", longVariable03);
    //Printing the integer as an octal
    printf("\nintVariable02 -> %u", longVariable02);
    printf("\nintVariable03 -> %u", longVariable03);

//long integer -> long int
    long int longIntVariable01;
    long int longIntVariable02 = 100;
    long int longIntVariable03 = -20;

    printf("\nSize of long int is %d", sizeof(longIntVariable01));
    //Print the number
    printf("\nintVariable02 -> %d", longIntVariable02);
    printf("\nintVariable03 -> %d", longIntVariable03);

    //Printing the integer as a hex
    printf("\nintVariable02 -> %x", longIntVariable02);
    printf("\nintVariable03 -> %x", longIntVariable03);
    printf("\nintVariable02 -> %X", longIntVariable02);
    printf("\nintVariable03 -> %X", longIntVariable03);
    //Printing the integer as an octal
    printf("\nintVariable02 -> %o", longIntVariable02);
    printf("\nintVariable03 -> %o", longIntVariable03);
    //Printing the integer as an octal
    printf("\nintVariable02 -> %u", longIntVariable02);
    printf("\nintVariable03 -> %u", longIntVariable03);

//character -> char
    char charVariable01;
    char charVariable02 = 100;
    char charVariable03 = -20;

    printf("\nSize of long int is %d", sizeof(charVariable01));
    //Print the number
    printf("\nintVariable02 -> %d", charVariable02);
    printf("\nintVariable03 -> %d", charVariable03);

    //Printing the integer as a hex
    printf("\nintVariable02 -> %x", charVariable02);
    printf("\nintVariable03 -> %x", charVariable03);
    printf("\nintVariable02 -> %X", charVariable02);
    printf("\nintVariable03 -> %X", charVariable03);
    //Printing the integer as an octal
    printf("\nintVariable02 -> %o", charVariable02);
    printf("\nintVariable03 -> %o", charVariable03);
    //Printing the integer as an octal
    printf("\nintVariable02 -> %u", charVariable02);
    printf("\nintVariable03 -> %u", charVariable03);

//unsigned int -> unsigned int
    unsigned int uintVariable01;
    unsigned int uintVariable02 = 100;
    unsigned int uintVariable03 = -20;

    printf("\nSize of unsigned int is %d", sizeof(uintVariable01));
    //Print the number
    printf("\nintVariable02 -> %d", uintVariable02);
    printf("\nintVariable03 -> %d", uintVariable03);

    //Printing the integer as a hex
    printf("\nintVariable02 -> %x", uintVariable02);
    printf("\nintVariable03 -> %x", uintVariable03);
    printf("\nintVariable02 -> %X", uintVariable02);
    printf("\nintVariable03 -> %X", uintVariable03);
    //Printing the integer as an octal
    printf("\nintVariable02 -> %o", uintVariable02);
    printf("\nintVariable03 -> %o", uintVariable03);
    //Printing the integer as an octal
    printf("\nintVariable02 -> %u", uintVariable02);
    printf("\nintVariable03 -> %u", uintVariable03);

//Reading a number from the input
    int readInt;
    printf("\nInput the number:");
    scanf("%d", &readInt);
    printf("\nThe number inputted is:%d", readInt);

//MATHMETICAL
    int intVariable101 = 15;
    int intVariable102 = 2;
    int intVariable103 = intVariable101 + intVariable102;
    printf("\nintVariable101 + intVariable103 -> %d", intVariable103);

    intVariable103 = intVariable101 - intVariable102;
    printf("\nintVariable101 - intVariable103 -> %d", intVariable103);

    intVariable103 = intVariable101*intVariable102;
    printf("\nintVariable101*intVariable102 -> %d", intVariable103);

    intVariable103 = intVariable101/intVariable102;
    printf("\nintVariable101/intVariable102 -> %d", intVariable103);

    intVariable103 = intVariable101%intVariable102;
    printf("\nintVariable101%%intVariable102 -> %d", intVariable103);

    intVariable103 = intVariable101^intVariable102;
    printf("\nintVariable101^intVariable102 -> %d", intVariable103);

//Comparision
    if(intVariable101 > intVariable102){
        printf("\n%d is greater than %d", intVariable101, intVariable102);
    }
    else{
        printf("\n%d is less than or equal to %d", intVariable101, intVariable102);
    }

    if(intVariable101 >= intVariable102){
        printf("\n%d is greater than or equal to %d", intVariable101, intVariable102);
    }
    else{
        printf("\n%d is less than %d", intVariable101, intVariable102);
    }

    if(intVariable101 < intVariable102){
        printf("\n%d is less than %d", intVariable101, intVariable102);
    }
    else{
        printf("\n%d is greater than or equal to %d", intVariable101, intVariable102);
    }

    if(intVariable101 <= intVariable102){
        printf("\n%d is less than or equal to %d", intVariable101, intVariable102);
    }
    else{
        printf("\n%d is greater than %d", intVariable101, intVariable102);
    }

    if(intVariable101 == intVariable102){
        printf("\n%d is equal to %d", intVariable101, intVariable102);
    }
    else{
        printf("\n%d is not equal to %d", intVariable101, intVariable102);
    }

    if(intVariable101 != intVariable102){
        printf("\n%d is not equal to %d", intVariable101, intVariable102);
    }
    else{
        printf("\n%d is equal to %d", intVariable101, intVariable102);
    }

//Shift Operations
    intVariable103 = intVariable101 << 1;
    printf("\n%d shift left once is %d", intVariable101, intVariable103);

    intVariable103 = intVariable101 >> 1;
    printf("\n%d shift right once is %d", intVariable101, intVariable103);

//ASSIGNING TO DIFFERENT DATA TYPES
    int originalNumber = pow(2, 17);
    char charNum = originalNumber;
    short shortNum = originalNumber;
    long longNum = originalNumber;

    unsigned int uintNum = originalNumber;
    unsigned char ucharNum = originalNumber;
    unsigned short ushortNum = originalNumber;
    unsigned long ulongNum = originalNumber;

    printf("\n\nOriginal Number is %d", originalNumber);
    printf("\n\n\tchar is %d", charNum);
    printf("\n\n\tshort is %d", shortNum);
    printf("\n\n\tlong is %l", shortNum);
    printf("\n\n\tu int is %u", uintNum);
    printf("\n\n\tu char is %u", ucharNum);
    printf("\n\n\tu short is %u", ushortNum);
    printf("\n\n\tu long is %lu", ulongNum);


    originalNumber = -100;
    charNum = originalNumber;
    shortNum = originalNumber;
    longNum = originalNumber;

    uintNum = originalNumber;
    ucharNum = originalNumber;
    ushortNum = originalNumber;
    ulongNum = originalNumber;

    printf("\n\nOriginal Number is %d", originalNumber);
    printf("\n\n\tchar is %d", charNum);
    printf("\n\n\tshort is %d", shortNum);
    printf("\n\n\tlong is %l", shortNum);
    printf("\n\n\tu int is %u", uintNum);
    printf("\n\n\tu char is %u", ucharNum);
    printf("\n\n\tu short is %u", ushortNum);
    printf("\n\n\tu long is %lu", ulongNum);


    //Overflow
    printf("\n\n\n\nOVERFLOW, very important to check ");

    int intPveOverflow;
    int intNveOverflow;
    unsigned int uintOverflow;

    intPveOverflow = INT_MAX;
    printf("\nMax value of int -> %d", intPveOverflow);
    intPveOverflow++;
    printf("\nAdd 1 to max value of int -> %d", intPveOverflow);

    intNveOverflow = INT_MIN;
    printf("\nMin value of int -> %d", intNveOverflow);
    intNveOverflow--;
    printf("\nDecrement 1 to min value of int -> %d", intNveOverflow);

    uintOverflow = UINT_MAX;
    printf("\nMax value of uint -> %u", uintOverflow);
    uintOverflow++;
    printf("\nAdd 1 to max value of uint -> %u", uintOverflow);

    uintOverflow = 0;
    printf("\nMin value of uint -> %u", uintOverflow);
    uintOverflow--;
    printf("\nDecrement 1 to min value of uint -> %u", uintOverflow);

//BITWISE OPERATIONS
    printf("\n\n\nBITWISE OPERATIONS\n");
    unsigned char bitOps01 = 0xF0;
    unsigned char bitOps02 = 0x0F;
    unsigned char bitOps03 = 0xAA;
    unsigned char bitOps04 = 0x55;

    unsigned char bitOpsNOT = ~bitOps01;
    unsigned char bitOpsOR = bitOps01 | bitOps02;
    unsigned char bitOpsAND = bitOps01 & bitOps02;
    unsigned char bitOpsXOR = bitOps01 ^ bitOps02;

    printf("\n%02x -> Not %02x", bitOps01, bitOpsNOT);
    printf("\n%02x AND %02x -> %02x", bitOps01, bitOps02, bitOpsAND);
    printf("\n%02x OR %02x -> %02x", bitOps01, bitOps02, bitOpsOR);
    printf("\n%02x XOR %02x -> %02x", bitOps01, bitOps02, bitOpsXOR);

//Correct way to change from one to another
    originalNumber = -100;
    //This is type chasting so you can go from one type to another
    charNum = (char) originalNumber;
    shortNum = (short) originalNumber;
    longNum = (long) originalNumber;

    uintNum = (unsigned int)originalNumber;
    ucharNum = (unsigned char)originalNumber;
    ushortNum = (unsigned short)originalNumber;
    ulongNum = (unsigned long)originalNumber;

    printf("\n\nOriginal Number is %d", originalNumber);
    printf("\n\n\tchar is %d", charNum);
    printf("\n\n\tshort is %d", shortNum);
    printf("\n\n\tlong is %l", shortNum);
    printf("\n\n\tu int is %u", uintNum);
    printf("\n\n\tu char is %u", ucharNum);
    printf("\n\n\tu short is %u", ushortNum);
    printf("\n\n\tu long is %lu", ulongNum);

    return 0;
}

