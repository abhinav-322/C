#include <stdio.h>
#include <stdlib.h>

int main()
{
     int ye,dy;
     printf("enter the year");
     scanf("%d",&ye);
     dy=ye-2001;
     if(dy%7==0)
        printf("the day is monday\n");

     if(dy%7==1)
        printf("the day is tuesday\n");

     if(dy%7==2)
        printf("the day is wednesday\n");

     if(dy%7==3)
        printf("the day is thursday\n");

     if(dy%7==4)
        printf("the day is friday\n");

     if(dy%7==5)
        printf("the day is saturday\n");

     if(dy%7==6)
        printf("the day is sunday");
        return 0;
}
