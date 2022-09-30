#include<stdio.h>
main()
{
    int  a[1000],b[1000],i,j,n,m;

    printf("Enter The size Of Array =");
    scanf("%d",&n);

    printf("Enter The size Of Array =");
    scanf("%d",&m);

    printf("\n\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }

    printf("\n\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);

    }

    for(j=0;j<m;j++)
    {
        printf("%d",b[j]);

    }
    

}