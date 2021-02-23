/*
 * Check_Alphabet_Or_Not.c
 *
 *  Created on: Feb 22, 2021
 *      Author: Mario
 */


#include<stdio.h>
int main()
{

	char alphabet;

	printf("please enter character : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&alphabet);
	if ( (alphabet>=65 && alphabet<=90) || (alphabet>=97 && alphabet<=122) )
	{
		printf("%c is Alphabet",alphabet);
	}
	else
	{
		printf("%c is Not Alphabet",alphabet);
	}
	return 0;
}
