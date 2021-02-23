/*
 * Swap_Two_Numbers.c
 *
 *  Created on: Feb 22, 2021
 *      Author: Mario
 */


#include<stdio.h>

int main()
{

	int number_1 ,number_2;
	int temp;
	printf("please Enter Two Numbers\n");
	fflush(stdin);fflush(stdout);
	scanf("%d\t%d",&number_1,&number_2);


	printf("before Swapping \n");
	printf("the number 1 = %d , the number 2 = %d\n",number_1,number_2);

	temp=number_1;
	number_1=number_2;
	number_2=temp;

	printf("After Swapping\n");
	printf("the number 1 = %d , the number 2 = %d\n",number_1,number_2);





return 0;
}
