#include <stdio.h>

/*
 A program that finds whether an entered number is 
 odd or even
*/

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if (num%2 == 0)
        printf("This number is even.");
    else
        printf("This number is odd.");
    
    return 0;
}
