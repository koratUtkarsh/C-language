#include<stdio.h>  
main()   
{   
        float P , R , T , SI ;  

        printf("Enter The Paid Value =");
        scanf("%f",&P);

        printf("Enter The Radious =");
        scanf("%f",&R);

        printf("Enter The Time =");
        scanf("%f",&T);


        SI  = (P*R*T)/100;   

        printf("\n\n Simple Interest is = %f", SI);  
        
}  