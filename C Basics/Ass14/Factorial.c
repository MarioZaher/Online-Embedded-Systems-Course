/*
 * Factorial.c
 *
 *  Created on: Feb 22, 2021
 *      Author: Mario
 */

#include<stdio.h>

int main()
{
 int num;
 int multipier=1;
	printf("please enter the number : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);

    if(num < 0)
    {
    	printf("Error Factorial Of Negative does not Exist !!");
    }
    else if (num == 1 || num == 2)
    {
    	printf("factorial = %d",num);
    }

    else
    {
    	while(num != 0)
    	{

    		multipier= multipier * num;
            num--;
    	}

    	printf("factorial = %d",multipier);

    }
return 0;
}
