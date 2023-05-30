#include <stdio.h>

/*
 The program that detects whether the entered year
 is a leap or not
*/

int main(int argc, char const *argv[])
{
    int year;

    printf("Enter a year for controllin' leap years: ");
    scanf("%d",&year);


    if (year%400 == 0)
        printf("This year is leap.");
    else
        printf("This year isn't leap.");
    
    return 0;
}
