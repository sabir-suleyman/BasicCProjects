#include <stdio.h>

/*
 A progeam that asks the user to enter two numbers
 and comparees the size of the numbers
*/

int main()
{
    int num1,num2;

    printf("Enter 1st number: ");
    scanf("%d",&num1);

    printf("Enter 2nd number: ");
    scanf("%d",&num2);

    if (num1 == num2)
        printf("This numbers is equal");
     else if (num1 > num2)
        printf("First number is bigger than the other.");
     else 
        printf("Second number is bigger than the other.");
    
    return 0;
}
