#include<stdio.h>
int main()
{
    float km,m,cm;
    printf("enter the distance in km=");
    scanf("%f",&km);
    m=km*1000;
    cm=km*100000;

    printf("the distance in m is=%f\n",m);
    printf("the distance in cm is=%f\n",cm);

    return 0;


}
