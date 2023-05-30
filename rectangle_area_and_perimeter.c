#include <stdio.h>

/*
   A program that finds the area and perimeter of rectangle
   whose two sides are entered
 */

int main()
{   
    int x1,x2;
    printf("Enter the sides of rectangle:\n");
    scanf("%d \n %d", &x1 ,&x2);

    printf("The perimeter of rectangle is: %d\n", (x1+x2)*2);
    printf("The area of rectangle is: %d", x1*x2);
    return 0;
}
