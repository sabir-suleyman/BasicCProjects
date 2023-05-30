#include <stdio.h>
#include <math.h>

int main()
{
    int  sayi ,on ,yuz ,bir , temp;

    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    yuz = sayi/100;
    on = (sayi/10)%10;
    bir = sayi%10;
    
    temp = pow(yuz,3) + pow(on,3) + pow(bir,3);

    if ( temp == sayi)
        printf("Sayi armstrong sayisidir!");
    else
        printf("Sayi armstrong sayisi degildir...");
    
    return 0;
}
