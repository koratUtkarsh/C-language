#include <stdio.h>
main()
{
    int num,i,c=0;
    
    printf("Enter an Number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
	{
        if (num % i == 0)
		{
            c++;
        }
    }
    if (c == 2)
	{
        printf("%d is a Prime Number.", num);
    }
    else 
	{
        printf("%d is not a Prime Number.", num);
    }
}