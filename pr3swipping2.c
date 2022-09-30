#include<stdio.h>
main()
{
    int a,b;

    printf("Enter The A =");
    scanf("%d",&a);

    printf("Enter The B =");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nvalue Of A =%d\n",a);
    printf("Value Of B =%d",b);
}