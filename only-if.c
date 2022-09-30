#include<stdio.h>
int main()
{
    int gujarati,hindi,english,science,computer,pt,maths,total,per;

    printf("Enter The Gujarati Marks =");
    scanf("%d",&gujarati);

    printf("Enter The Hindi Marks =");
    scanf("%d",&hindi);

    printf("Enter The English Marks =");
    scanf("%d",&english);

    printf("Enter The science Marks =");
    scanf("%d",&english);

    printf("Enter The Computer Marks =");
    scanf("%d",&computer);

    printf("Enter The PT Marks =");
    scanf("%d",&pt);

    printf("Enter The maths Marks =");
    scanf("%d",&maths);

    total = gujarati+hindi+english+science+computer+pt+maths;
    per = total/7;

    printf("\nTotel Marks Is =%d\n",total);
    printf("Percentage Is =%d\n",per);

    if(per > 90)
    {
        printf("A1 Grade..!!");
    }

    if(per > 80 && per< 90)
    {
        printf("A Grade..!!");
    }

    if(per > 70 && per < 80)
    {
        printf("B1 Grade..!!");
    }

    if(per > 60 && per < 70)
    {
        printf("B Grade..!!");
    }

    if(per > 50 && per < 60)
    {
        printf("C Grade..!!");
    }

    if(per > 40 && per < 50)
    {
        printf("D Grade..!!");
    }

    if(per < 33 && per < 40)
    {
        printf("You Are Fail..!!");
    }

    
}