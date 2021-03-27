#include <stdio.h>
#include<math.h>

int main()
{
    float a,b,c,ar,s,arr;
    printf("enter the lenghts of sides of the triangles(a,b,c)");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    ar=s*(s-a)*(s-b)*(s-c);
    arr=pow(ar,0.5);
    printf("the area triangle is %f",arr);
    return 0;


}
