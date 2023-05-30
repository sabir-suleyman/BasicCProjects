#include <stdio.h>

/*
A program that calculates factorial of an entered number
*/

int main()
{
    int n , fact = 1;
    printf("Enter a number:");
    scanf("%d",&n);

    for (int i = n; i > 0; i--)
    {
        fact *= i;
    }
    
    printf("%d! = %d", n , fact);
    return 0;
}
