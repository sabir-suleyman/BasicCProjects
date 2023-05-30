#include <stdio.h>
#include <stdbool.h>

/*
A program that finds whether a number entered is a prime number
*/

int main()
{
    int x;
    bool st = true;

    printf("Enter the number: ");
    scanf("%d",&x);


    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            st = false; 
            break;   
        }
    }

    if (st == false)
        printf("This isn't prime number;\n");
    else
        printf("This is prime number.\n");

    return 0;
}
