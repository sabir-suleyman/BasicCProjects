#include <stdio.h>


int main()
{
    int sayi , toplam = 0;
    printf("Sayi giriniz: ");
    scanf("%d",sayi);

    for (int i = 1; i < sayi; i++)
    {
        if (sayi%i == 0)
           toplam += i;
    }
    
    if (toplam == sayi)
        printf("Sayi mukemmeldir");
    else
        printf("Sayi mukemmel degil...");

    return 0;
}
