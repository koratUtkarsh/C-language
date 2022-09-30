#include <stdio.h>
main()
{
    int no, temp, re, reverse = 0;
 
    printf("Enter an integer");
    scanf("%d", &no);

    temp = no;
    
    while (no > 0)
    {
        re = no % 10;
        reverse = reverse * 10 + re;
        no=no/10;
    }
    printf("Given number is = %d\n", temp);
    printf("Its reverse is  = %d\n", reverse);
    
    if (temp == reverse)
	{
		printf("Number is a palindrome \n");
	}
    else
	{
        printf("Number is not a palindrome \n");
    }
}