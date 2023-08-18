#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Chap03.c\n");

//BOOLEAN
//This is a special data type which can take two values
//true
//false
//declare an boolean
    bool boolVariable01;
    bool boolVariable02;

    boolVariable01 = true;  //1
    boolVariable02 = false; //0

    //This is
    if(boolVariable01){
        printf("\nssboolVariable01 is true");
    }
    else{
        printf("\nboolVariable01 is false");
    }

    if(boolVariable02){
        printf("\nboolVariable02 is true");
    }
    else{
        printf("\nssboolVariable02 is false", boolVariable02);
    }


//Comparisions return a boolean value

    bool opBool01 = (2 > 3);

// > operator is a greater than
// don't worry about the if and else you will learn about this later
    if( 2 > 3){
        printf("\n Using Direct Comparisions: 2 is greater than 3\n\n");
    }
    else{
        printf("\n Using Direct Comparisions: 2 is not greater than or equal to 3\n\n");
    }

    if(opBool01){
        printf("\n Using bool: 2 is greater than 3\n\n");
    }
    else{
        printf("\n Using bool: 2 is not greater than or equal to 3\n\n");
    }


    //GREATER THAN OR EQUAL TO
    opBool01 = ( 2 >= 3);
    if( 2 >= 3){
        printf("\n In if condition, 2 is greater than or equal to 3\n\n");
    }
    else{
        printf("\n In if condition, 2 is not greater than 3\n\n");
    }

    //LESS THAN
    opBool01 = ( 2 < 3);
    if( 2 < 3){
        printf("\n In another if cond 2 is less than 3\n\n");
    }
    else{
        printf("\n In another if cond, 2 is greater than or equal to 3\n\n");
    }

    //LESS THAN OR EQUAL TO    opBool01 = ( 2 <= 3);
    if( 2 <= 3){
        printf("\n 2 is less than or equal to 3\n\n");
    }
    else{
        printf("\n 2 is greater than 3\n\n");
    }

    //EQUAL TO
    opBool01 = ( 2 == 3);
    if( 2 != 3){
        printf("\ 2 is equal to 3\n\n");
    }
    else{
        printf("\n 2 is not equal to 3\n\n");
    }

    //NOT EQUAL TO
    opBool01 = ( 2 != 3);
    if( 2 != 3){
        printf("\n 2 is not equal to 3\n\n");
    }
    else{
        printf("\n 2 is equal to 3\n\n");
    }

    // Check true and false
    // CONDITIONAL OR TERNARY OPERATOR
    // value01 = LogicalCondition ? value02 : value03
    // if LogicalCondition is true then value01 is assigned value02
    // if LogicalCondition is false then value01 is assigned value03
    int value01;
    value01 = ( 2 > 3)? 1: 2;
    printf("\nValue of value01 is %d", value01);

    bool boolVariable03;
    boolVariable03 = (45 == 45);
    value01 = boolVariable03 ? 20:30;
    printf("\nValue of value01 is %d", value01);

    bool boolVariable04;
    bool boolVariable05;
    bool boolVariable06;

    //THE NOT OPERATOR
    boolVariable04 = (5 > 2);
    boolVariable05 = !boolVariable04;

    printf("\n\n\n\tboolVariable04 = (5 > 2)");
    printf("\n\tboolVariable05 = !boolVariable04");

    if(boolVariable04){
        printf("\n\n\n\nboolVariable04 is true");
    }
    else{
        printf("\nboolVariable04 is false");
    }

    if(boolVariable05){
        printf("\nboolVariable05 is true");
    }
    else{
        printf("\nboolVariable05 is false");
    }



    //IN REAL LIFE WE MAY HAVE MULTIPLE CONDITIONS
    // if any one of the conditions is true then total condition is true;
    //THIS IS WHEN LOGICAL OPERATIONS ARE USED

    if((5 > 2) && (7 >= 6)){
        printf("\n\n (5 > 2) && (7 >= 6) is true");
    }
    else{
        printf("\n\n (5 > 2) && (7 >= 6) is false");
    }

// if both conditions are true then total condition is true;
    boolVariable04 = (5 > 2);
    boolVariable05 = (7 >= 6);
    boolVariable06 = boolVariable04 && boolVariable05;

    printf("\n\n\n\tboolVariable04 = (5 > 2)");
    printf("\n\tboolVariable05 = (7 >= 6)");
    printf("\n\tboolVariable06 = boolVariable04 && boolVariable05");

    if(boolVariable04){
        printf("\nboolVariable04 is true");
    }
    else{
        printf("\nboolVariable04 is false");
    }

    if(boolVariable05){
        printf("\nboolVariable05 is true");
    }
    else{
        printf("\nboolVariable05 is false");
    }
    if(boolVariable06){
        printf("\nboolVariable06 is true");
    }
    else{
        printf("\nboolVariable06 is false");
    }

// if both conditions are true then total condition is true;
    boolVariable04 = (5 > 2);
    boolVariable05 = (7 < 6);
    boolVariable06 = boolVariable04 && boolVariable05;

    printf("\n\n\n\tboolVariable04 = (5 > 2)");
    printf("\n\tboolVariable05 = (7 < 6)");
    printf("\n\tboolVariable06 = boolVariable04 && boolVariable05");

    if(boolVariable04){
        printf("\n\n\n\nboolVariable04 is true");
    }
    else{
        printf("\nboolVariable04 is false");
    }

    if(boolVariable05){
        printf("\nboolVariable05 is true");
    }
    else{
        printf("\nboolVariable05 is false");
    }
    if(boolVariable06){
        printf("\nboolVariable06 is true");
    }
    else{
        printf("\nboolVariable06 is false");
    }


// if any one of the conditions is true then total condition is true;
    boolVariable04 = (5 > 2);
    boolVariable05 = (7 < 6);
    boolVariable06 = boolVariable04 || boolVariable05;

    printf("\n\n\n\tboolVariable04 = (5 > 2)");
    printf("\n\tboolVariable05 = (7 < 6)");
    printf("\n\tboolVariable06 = boolVariable04 || boolVariable05");

    if(boolVariable04){
        printf("\n\n\n\nboolVariable04 is true");
    }
    else{
        printf("\nboolVariable04 is false");
    }

    if(boolVariable05){
        printf("\nboolVariable05 is true");
    }
    else{
        printf("\nboolVariable05 is false");
    }
    if(boolVariable06){
        printf("\nboolVariable06 is true");
    }
    else{
        printf("\nboolVariable06 is false");
    }

    return 0;
}
