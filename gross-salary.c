#include<stdio.h>
main()
{
    int basic, hra,da,ta,salary;

    printf("Enter The Basic Salary =");
    scanf("%d",&basic);

    hra = (basic*10)/100;
    da =(basic*8)/100;
    ta =(basic*5)/100;

    salary = basic + hra +da + ta;

    printf("Gross Salary Is =%d\n",salary);
}