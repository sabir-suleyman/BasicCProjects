#include <stdio.h>
 
/* 
   A program that asks the user to enter two numbers  
   and prints the sum of these two numbers on the screen 
*/

int main()
{
    int num1 , num2;

    printf("Enter 1st number: ");
    scanf("%d",&num1);

    printf("Enter 2nd number: ");
    scanf("%d",&num2);
   
    printf("The sum of this numbers is: %d",(num1+num2));
    return 0;
}
