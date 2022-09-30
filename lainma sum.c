#include<stdio.h>
main()
{
    int no,i,sum=0;

    printf("Enter The no = ");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        printf(" %d +",i);
        sum = sum+i;
        
    }
    printf(" =%d\n",sum);
}