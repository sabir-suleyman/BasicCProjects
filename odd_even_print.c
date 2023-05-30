#include <stdio.h>

/*
A program that prints all natural numbers from 1 to N, odd and even numbers separately
*/ 

int main()
{
    int  n ,i = 1;
    printf("Enter a number:");
    scanf("%d",&n);

    printf("\nOdd numbers : ");
    
    while (i<n)
    {
        printf("%d ",i);
        i += 2;
    }

    printf("\n\nEven numbers : ");
    
    i = 2;
    while (i<n)
    {
        printf("%d ",i);
        i += 2;
    }
    return 0;
}
