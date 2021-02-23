/*
 * Sum_of_Natural_Num.c
 *
 *  Created on: Feb 22, 2021
 *      Author: Mario
 */

#include<stdio.h>

int main()
{
	int number_of_Counts;
	int sum=0;
	printf("enter an integar : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number_of_Counts);

	for(int i = 0; i<=number_of_Counts ; i++ )
	{
		sum=sum +i ;
	}

	printf("the summation =%d",sum);


return 0;
}
