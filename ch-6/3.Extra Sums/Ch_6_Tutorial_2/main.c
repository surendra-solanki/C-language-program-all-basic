#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Chap06.c!\n");
    char charVar01;
    char charVar02 = 'a';
    char charVar03 = 99;
    printf("\n\ncharVar02 is %c and %u", charVar02, charVar02);
    printf("\n\ncharVar03 is %c and %u", charVar03, charVar03);
    charVar01 = charVar02 + 1;
    printf("\n\n%c + 1 is %c", charVar02, charVar01);
    charVar03 = charVar01 - 1;
    printf("\n\n%c - 1 is %c", charVar01, charVar03);
    if(charVar02 <= charVar01)
    {
    printf("\n\n%c is less than or equal to %c", charVar02, charVar01);
    }
    else{
        printf("\n\n%c is greater than %c", charVar02, charVar01);
    }
    charVar02 = 'C';
    if(charVar02 >= 'a' && charVar02 <= 'z')
    {
        printf("\n\n%c is a small case alphabet", charVar02);
    }
    else
    {
        printf("\n\n%c is not a small case alphabet", charVar02);
    }
    if(charVar02 >= 'A' && charVar02 <= 'Z'){
        printf("\n\n%c is a Capitals alphabet", charVar02);
    }
    else{
        printf("\n\n%c is not a Capitals alphabet", charVar02);
    }



    charVar02 = '3';
    printf("\n\ncharVar02 is %c and %u", charVar02, charVar02);
    //READ A CHARACTER FROM THE INPUT
    printf("\nRead a character:");
    scanf("%c", &charVar03);
    printf("\nCharacter that was input::%c", charVar03);




    return 0;
}
