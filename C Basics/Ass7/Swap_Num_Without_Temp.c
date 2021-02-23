/*
 * Swap_Num_Without_Temp.c
 *
 *  Created on: Feb 22, 2021
 *      Author: Mario
 */

#include<stdio.h>
int main()
{

int number_1 = 5;
int number_2 = 6;

printf("number before swapping\n");
printf("the number 1 = %d ,number 2 = %d\n",number_1,number_2);
/*By Using Addition Method*/

number_1=number_1+number_2;
number_2=number_1-number_2;
number_1=number_1-number_2;


/*By Using Multiplication Method*/
number_1=number_1*number_2;
number_2=number_1/number_2;
number_1=number_1/number_2;

printf("number after swapping\n");
printf("the number 1 = %d ,number 2 = %d",number_1,number_2);



return 0;
}
