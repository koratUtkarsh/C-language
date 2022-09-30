#include<stdio.h>
main()
{
    int maths,science,hindi,total;
    float per;

    printf("Enter the Maths Marks =");
    scanf("%d",&maths);

    printf("Enter the Science Marks =");
    scanf("%d",&science);

    printf("Enter the Hindi Marks =");
    scanf("%d",&hindi);

    total = maths + science + hindi;

    per = total/3;

    printf("Totel Marks Is =%d\n",total);
    printf("Percantage Is =%f\n",per);
    

    
}