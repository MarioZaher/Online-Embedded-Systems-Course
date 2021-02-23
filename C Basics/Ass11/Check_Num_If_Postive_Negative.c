/*
 * Check_Num_If_Postive_Negative.c
 *
 *  Created on: Feb 22, 2021
 *      Author: Mario
 */
#include<stdio.h>

int main()
{

	float number;
	printf("please Enter the number : ");
	fflush(stdin);fflush(stdout);
    scanf("%f",&number);

    if(number>0)
    {
    	printf("%f is positive",number);
    }
    else if(number == 0)
    {
    	printf("you entered zero");
    }
    else
    {
    	printf("%f is negative",number);
    }

return 0;
}
