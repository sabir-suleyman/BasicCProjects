#include <stdio.h>
#include <stdbool.h>
/*
A program that lists the prime numbers between two entered numbers
*/

int isprime(int num) 
{

    bool st = true;
  for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            st = false; 
            break;   
        }
    }

    if (st == false)
        return 0;
    else
        return 1; //it is prime
}

int main()
{
    int x,y;

    label1:

    printf("Enter 1st number: ");
    scanf("%d",&x);

    printf("Enter 2nd number: ");
    scanf("%d",&y);
    
    if (x>=y)
    {
        printf("Please enter this numbers again correctly!\n");
        goto label1;
    }
    
    for (int i = x; i < y; i++)
    {
        if (isprime(i) == 1)
            printf("%d ",i);
    }
    
    return 0;
}
