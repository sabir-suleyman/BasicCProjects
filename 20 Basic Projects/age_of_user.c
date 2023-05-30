#include <stdio.h>

/*
A program that calculates month, week ,day ,
hour ,minute and second by asking the age of user
*/

int main()
{
    int age,c_year,b_year;

    printf("Enter the current year: ");
    scanf("%d",&c_year);

    printf("Enter the birth year: ");
    scanf("%d",&b_year);

    printf("\nYou have been living for --> %d year --> %d month --> %d week --> %ld day --> %ld hour --> %ld minute --> %ld second.",(c_year-b_year),(c_year- b_year)*12, (c_year- b_year)*48, (c_year- b_year)*365, (c_year- b_year)*8766,(c_year- b_year)*525960,(c_year- b_year)*31557600);
    return 0;
}
