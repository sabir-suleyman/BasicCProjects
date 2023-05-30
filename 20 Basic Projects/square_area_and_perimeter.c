#include <stdio.h>
#include <math.h>

/*
 A program that calculates the area and 
 the perimeter of a square whose side is entered
 */

int main()
{
    int side, area;

    printf("Enter the side of square: ");
    scanf("%d",&side);

    area = pow(side,2);

    printf("The area of square is: %d\n",area);
    printf("The perimeter of square is: %d\n",(side*4));
    return 0;
}
