#include<stdio.h>
main()
{
    int i=1,fact=1,no;

    printf("Enter The no = ");
    scanf("%d",&no);

    while(i<=no)
    {
        printf("Value Is =%d\n",i);
        fact = fact*i;
        i++;
    }
    printf("Faciriol Is =%d\n",fact);
}