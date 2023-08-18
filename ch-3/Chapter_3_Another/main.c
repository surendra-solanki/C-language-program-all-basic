#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool Assignment(int x,int y);
bool Not_Assignment(int x,int y);
bool Greaterthan_A(int x,int y);
bool Lesserthan_A(int x,int y);
bool Greaterthan_OrEqual_A(int x,int y);
bool Lesserthan_OrEqual_A(int x,int y);
bool And_Log_Operat(int x,int y);
bool Or_Log_Operat(int x,int y);
bool Not_Log_Operat(int x,int y);

int main()
{
    int x,y;
    printf("Enter Value For X and Y :");
    scanf("%d %d",&x,&y);
    Assignment(x,y);
    Not_Assignment(x,y);
    Greaterthan_A(x,y);
    Lesserthan_A(x,y);
    Greaterthan_OrEqual_A(x,y);
    Lesserthan_OrEqual_A(x,y);


    And_Log_Operat(x,y);
    Or_Log_Operat(x,y);
    Not_Log_Operat(x,y);

    return 0;
}

 bool Assignment(int x,int y)
 {      bool z;
        if(x==y)
        {
         z=true;
        }
        else
        {
         z=false;
        }
        return z;
 }

 bool Not_Assignment(int x,int y)
 {      bool z;
        if(x!=y)
        {
        z=true;
        }
        else
        {
        z=false;
        }
        return z;
 }

 bool Greaterthan_A(int x,int y)
 {      bool z;

        if(x>y)
        {
        z=true;
        }
        else
        {
        z = false;
        }
        return z;
 }

  bool Lesserthan_A(int x,int y)
 {      bool z;
        if(x<y)
        {
        z=true;
        }
        else
        {
        z=false;
        }
        return z;
 }

  bool Greaterthan_OrEqual_A(int x,int y)
 {      bool z;
        if(x>=y)
        {
        z=true;
        }
        else
        {
        z=false;
        }
        return z;
 }


  bool Lesserthan_OrEqual_A(int x,int y)
 {      bool z;
        if(x<=y)
        {
        z=true;
        }
        else
        {
        z = false;
        }
        return z;
 }

 bool And_Log_Operat(int x,int y)
 {
        bool z;
        if(x&&y)
        {
        z=true;
        }
        else
        {
        z = false;
        }
        return z;
 }

 bool Or_Log_Operat(int x,int y)
 {
        bool z;
        if(x||y)
        {
        z=true;
        }
        else
        {
        z = false;
        }
        return z;
 }

  bool Not_Log_Operat(int x,int y)
 {
        bool z;
        if(!(x&&y))
        {
        z=true;
        }
        else
        {
        z = false;
        }
        return z;
 }
