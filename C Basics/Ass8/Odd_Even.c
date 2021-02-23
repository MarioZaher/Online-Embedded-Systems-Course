/*
 * Odd_Even.c
 *
 *  Created on: Feb 22, 2021
 *      Author: Mario
 */

#include<stdio.h>

int main()
{

int CheckNumber;
printf("Enter the number you wont to check : ");

fflush(stdin);fflush(stdout);
scanf("%d",&CheckNumber);

if((CheckNumber%2==0))
{
	printf("%d is even",CheckNumber);
}
else
{

	printf("%d is odd",CheckNumber);

}

return 0;
}
