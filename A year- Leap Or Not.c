#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    if(y%4==0)
        printf("its a leap year");
    else
        printf("its not a leap year");
    return 0;
}
