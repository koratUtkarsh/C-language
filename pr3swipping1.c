#include<stdio.h>
main()
{
    int a,b,c;

    printf("Enter The A =");
    scanf("%d",&a);

    printf("Enter The B =");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;
    printf("\nvalue Of A =%d\n",a);
    printf("Value Of B =%d",b);
}