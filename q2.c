#include<stdio.h>
main()
{
    int  a[1000],i,n;

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
    }

    printf("array languth is := %d",n);

}