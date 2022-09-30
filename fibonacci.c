#include<stdio.h>
main()
{
    int no,a=1,b=0,c=1,i=1;

    printf("Enter The no = ");
    scanf("%d",&no);

    while(i<=no)
    {
        a=b;
        b=c;
        c=a+b;
        i++;
        printf("Fibonacci Is =%d\n",c);
    }
}