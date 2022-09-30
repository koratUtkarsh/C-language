#include<stdio.h>
main()
{
    int  a[1000],i,n,sum=0,ave;

    printf("Enter The size Of Array =");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
        sum = sum+a[i];
        ave  = sum/10;
    }
    printf("Sum Is =%d\n",sum);
    printf("Average Is =%d\n",ave);

}