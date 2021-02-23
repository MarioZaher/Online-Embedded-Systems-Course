/*
 * Viowels_Checker.c
 *
 *  Created on: Feb 22, 2021
 *      Author: Mario
 */


#include<stdio.h>
int main()
{

char letter;
printf("Enter an alphabet : ");
fflush(stdin);fflush(stdout);
scanf("%c",&letter);

if( (letter == 'a') ||
    (letter == 'e') ||
	(letter == 'o') ||
	(letter == 'u') || (letter == 'i') )
{

	printf("%c is vowel",letter);
}
else
{
	printf("%c is consonant",letter);
}

return 0;
}
