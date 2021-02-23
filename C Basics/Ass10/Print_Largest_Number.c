/*
 * Print_Largest_Number.c
 *
 *  Created on: Feb 22, 2021
 *      Author: Mario
 */


#include <stdio.h>
int main()
{

	float num1,num2,num3;

	printf("please enter 3 number to choose which is the largest\n");
	fflush(stdin);fflush(stdout);
    scanf("%f\n%f\n%f",&num1,&num2,&num3);

    if((num1 > num2  ) && (num1 > num3))
    {
    	printf("%f is largest",num1);
    }
    else if((num2 > num1  ) && (num2 > num3))
    {
    	printf("%f is largest",num2);
    }
    else if((num3 > num1  ) && (num3 > num1))
    {
    	printf("%f is largest",num3);
    }

return 0;
}
