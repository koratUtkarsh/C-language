#include<stdio.h>
main()
{
    int a,i;

    printf("Enter The A = ");
    scanf("%d",&a);

    for(i=1;i<=10;i++)
    {
        printf("%d * %d =%d\n",a,i,a*i);
    }
}