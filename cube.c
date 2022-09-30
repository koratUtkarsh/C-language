#include<stdio.h>
int main()
{
    int value1 ,value2 ,value3 ,r1,r2,r3,total,sum;

    printf("Enter The Value1 =");
    scanf("%d",&value1);

    printf("Enter The Value2 =");
    scanf("%d",&value3);

    printf("Enter The Value3 =");
    scanf("%d",&value3);

    
    r1 = value1*value1*value1;
    r2 = value2*value2*value2;
    r3 = value3*value3*value3;

    total = r1+r2+r3;
    sum = r1+r2+r3;
    if(total == sum)
    {
        printf("write");
    }
    else
    {
        printf("wrong");
    }
    return 0;   
}