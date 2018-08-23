/*C program using ternary operator for printing Even/Odd*/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number to check whether Even/Odd!! \n");
    scanf("%d" , &num);
    (num%2==0)? 
    printf("The Number is Even :-) \n"):printf("Number is Odd \n");


}