#include <stdio.h>
#include <math.h>

/*
 The program finds the distance between
 two points whose coordinates are given
*/

int main()
{
    float x1,y1,x2,y2;

    printf("Enter x1: ");
    scanf("%f",&x1);
    printf("Enter y1: ");
    scanf("%f",&y1);
    printf("Enter x2: ");
    scanf("%f",&x2);
    printf("Enter y2: ");
    scanf("%f",&y2);

    

    printf("The distance between this coordinates are: %f",sqrt(pow((x2-x1),2)+pow((y2-y1),2)));

    
    return 0;
}
