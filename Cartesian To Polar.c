#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float x,y,r,a,x2,y2,r2,d,ang;
    printf("enter cartesian coordinate(x,y)");
    scanf("%f%f",&x,&y);
    x2=pow(x,2);
    y2=pow(y,2);
    r2=x2+y2;
    r=pow(r2,0.5);
    d=y/x;
    a=atan(d);
    ang=a*180/3.14;
    printf("the polar coordinate are (%f %f)s",r,ang);
    return 0;



}
