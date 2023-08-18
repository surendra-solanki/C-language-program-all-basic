#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Str1[6]="Hello";
    char Str2[10];
    char Str3[4];
    char Str4[15]="Hello World";
    char Str5[]="Hello World";
    char Str6[100]="Hello World";

    printf("1. %s\n",strcpy(Str2,Str1)); //Hello
    printf("2. %s\n",Str2);  //Hello

    printf("3. %s\n",strncpy(Str3,Str2,sizeof(Str3)));  ///HellHello
    Str3[sizeof(Str3)-1]='\0';
    printf("4. %s\n",Str3);  ////Hel
    Str3[strlen(Str3)-1]='\0';
    printf("5. %s\n",Str3);   ///He

    printf("6. %d\n",strlen(Str1)); //strlen will count only word and space,, it will never count null character(\0)///5
    printf("7. %d\n",strlen(Str5));  /// 11
    printf("8. %d\n",strlen(Str6));  /// 11

    char Str7[100],Str8[100];     //strcat it will automatically add null character
    strcpy(Str7,"Welcome to");
    strcpy(Str8," our Academy");
    strcat(Str7,Str8);
    printf("9. %s\n",Str7);  ///// Welcome to our Academy

    char Str9[5],Str10[100];   //strncat it will check empty space only fill empty not whole second string.
    strcpy(Str9,"He");
    strcpy(Str10,"llo!");
    strncat(Str9,Str10,sizeof(Str9)-strlen(Str9)-1);//here only 2 empty space remaining so Str10 of string "ll" only fill.
    printf("10. %s\n",Str9);   //// Hell

    char Str11[10],Str12[100];
    strcpy(Str11,"He");
    strcpy(Str12,"llo!");
    strncat(Str11,Str12,sizeof(Str11)-strlen(Str11)-1);
    printf("11. %s\n",Str11);   //// Hello!

    char *S1="abcd";                   //strcmp string compare
    char *S2="abce";
    if(strcmp(S1,S2)<0)
    {
     printf("S1 is less than S2\n");
    }else{
     printf("S1 is greater than or equal to S2\n");
    }

    char *S3="abcd";                   //strncmp string compare with as per requirment character
    char *S4="abce";
    if(strncmp(S1,S2,3)<0)
    {
     printf("S3 is less than S4\n");
    }else{
     printf("S3 is greater than or equal to S4\n");
    }







    return 0;
}
