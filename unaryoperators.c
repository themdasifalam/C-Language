#include<stdio.h>

//sizeof() - Constant Type

int main()
{
   int x,y,z;
   x=sizeof(34);            // int constant
   y=sizeof(3.56);          // real constant
   z=sizeof(a);             // char constant
   printf("%d %d %d",x,y,z);
}


/*

//Result - x is int type variable = 2, similarly y double type variable = 8, z int type variable accordind to ASCII= 2




/*

#include<stdio.h>

//sizeof() - Data Type

int main()
{
   int x;
   x=sizeof(float);
   printf("%d",x);
}

//Result - float = 4, double = 8, char = 1, int = 2









#include<stdio.h>

//sizeof() - Variable Type

int main()
{
   int x,y;
   float k;
   double d1;
   char ch;
   x=sizeof(y);
   printf("%d",x);
}

//Result - y is int type variable = 2, similarly k = 4, d1 = 8, ch = 1



*/

//------------------------------


/*
//** Increment Operator Case 1

int main()
{
    int x=3;
    x++;                        //x=x+1
    printf("%d",x);

}


// The result is 4


-------


//** Increment Operator Case 2

int main()
{
    int x=3;
    x++;         // Post Increment              //x=x+1 - opreator added later
    printf("%d",x);
    ++x;          // Pre Increment              //x=x+1  - opreator added Earlier
    printf("%d",x);
    printf("%d",x);

}


// The result is 45
*/







/*

//-- Decrement Operator Case 1

int main()
{
    int x=3;
    x--;         // Post Decrement              //x=x-1 - opreator added later
    printf("%d",x);
    --x;         // Pre Decrement              //x=x-1  - opreator added Earlier
    printf("%d",x);
    printf("%d",x);

}

// The result is 21

*/




/*

//-- Mix Operator Case 1

int main()
{
    int x=3,y;
    y=x++;         // Post increment              //x=x+1 - opreator added later
    printf("%d %d",x,y);

}

// The result is Y=3 and X=4 thus 43




//-- Mix Operator Case 1

int main()
{
    int x=3,y;
    y=++x;         // Pre increment              //x=x+1 - opreator added later
    printf("%d %d",x,y);

}

// The result is Y=4 and X=4 thus 44, because in case of Pre increment has higher value then assignment



*/

*/