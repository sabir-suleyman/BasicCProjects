#include <stdio.h>

/*
   A program that requests a number to be entered
   and writes the entered number to the screen 
*/

int main()
{
    int num;

    printf("Enter an integer number: ");
    scanf("%d",&num);

    printf("%d",num);
    return 0;
}
