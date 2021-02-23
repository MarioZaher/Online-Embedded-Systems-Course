/*
 * multi_two_floating_num.c
 *
 *  Created on: Feb 21, 2021
 *      Author: Mario
 */


#include<stdio.h>
int main()
{

	float num1,num2;
	printf("Please Enter Two Numbers\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&num1,&num2);
	printf("The sum of Two Number = %f", num1*num2);
	return 0;

}
