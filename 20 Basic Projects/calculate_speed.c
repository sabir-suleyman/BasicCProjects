#include <stdio.h>

/*
   A program that calculates the required speed by asking the user
   distance to be traveled and the arrival time
*/

int main()
{   
    int distance,time;
    float speed;
    printf("Enter the distance: ");
    scanf("%d",&distance);

    printf("\nEnter the trvel time: ");
    scanf("%d",&time);


    speed = (float)distance/time;

    printf("Your speed should be: %.1f km/h", speed);

    return 0;
}
