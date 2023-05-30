#include <stdio.h>
#include <math.h>

/*
   Program  to find the area and perimeter of the circle
   whose radius is entered
*/

int main()
{
    int r;

    printf("Enter the radius of circle: ");
    scanf("%d",&r);

    printf("The area of this circle is: %f\n", M_PI*pow(r,2) );
    printf("The perimeter of this circle is: %f\n", M_PI*2*r );
    return 0;
}
