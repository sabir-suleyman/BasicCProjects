#include <stdio.h>
#include <math.h>

/*
A program that detects triangle types by askin' the user for sides
*/

int main()
{
    float x,y,z;
    printf("Enter the sides of triangle:\nx: ");
    scanf("%f",&x);
    printf("\ny: ");
    scanf("%f",&y);
    printf("\nz: ");
    scanf("%f",&z);


    if (x == y && x == z)
        printf("This  is equilateral triangle.");
    else if ((pow(x,2)+pow(y,2)) == pow(z,2) || (pow(x,2)+pow(z,2)) == pow(y,2) || (pow(z,2)+pow(y,2)) == pow(x,2))
    {
        printf("This  is right triangle.");
    } else if ((x ==y && x!=z) || (x == z && x != y) || (y == z && y != x) )
    {
        printf("This  is isosceles triangle.");
    }
    
    
    
    return 0;
}
