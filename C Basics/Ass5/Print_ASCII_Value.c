/*
 * Print_ASCII_Value.c
 *
 *  Created on: Feb 21, 2021
 *      Author: Mario
 */


#include<stdio.h>

int main()
{
   char character;
	printf("Please enter the Charater to check ASCII Value\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&character);
    printf("the value of char is %d ", character);

return 0;
}
