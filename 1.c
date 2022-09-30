#include<stdio.h>
main()
{
    int x,y,value1,value2,velue3,ans;

    printf("Enter The Value X = ");
    scanf("%d",&x);

    printf("Enter The Value Y = ");
    scanf("%d",&y);

    value1 = x*x;
    value2 = y*y;
    velue3 = 2*(x*y);
    ans = value1+value2+velue3;

    
    //printf("The Answer Is =%d",value1);
    //printf("The Answer Is =%d",value2);
    //printf("The Answer Is =%d",value3);
    printf("The Answer Is =%d",ans);
}