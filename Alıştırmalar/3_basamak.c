#include <stdio.h>

int main()
{
    int bir ,yuz, on;
    printf("3 basamakli rakamlari farkli tam 648 sayi vardir. \n");
    for (int i = 102; i < 1000; i++)
    {
        bir = i%10;
        on = ((i- bir)/10)%10;
        yuz = (i - (10*on +bir))/100;

        if (yuz != on != bir)
            printf("\n",i);

    }
    
    return 0;
}
