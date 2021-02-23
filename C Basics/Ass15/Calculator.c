/*
 * Calculator.c
 *
 *  Created on: Feb 23, 2021
 *      Author: Mario
 */


#include<stdio.h>

int main()
{

	int num1,num2;
	char Operation;
	float result;
	printf("please enter the numbers : \n");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);

	printf("please enter the operation : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&Operation);

	switch(Operation)
	{
	case '+' :result=num1+num2;
	           printf("the result = %d",(int)result);
	break;

	case '-' : result=num1-num2;
               printf("the result = %d",(int)result);
	break;

	case '*' : result=num1*num2;

               printf("the result = %d",(int)result);
	break;

	case '/' : result=num1/num2;
               printf("the result = %f",result);
	break;

	default :  printf("ERROR !!");
	break;



	}




return 0;
}
