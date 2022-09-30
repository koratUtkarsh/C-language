#include<stdio.h>
main()
{
    int a=10,b=20;

    a=a+b;
    b=a-b;
    a=a-b;

    printf("value Of A =%d\n",a);
    printf("Value Of B =%d",b);
}