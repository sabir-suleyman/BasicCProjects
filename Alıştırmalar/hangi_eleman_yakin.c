#include <stdio.h>
# include <stdlib.h>


int main()
{
    int s, n,sayi ,kucuk;
    printf("Olusturulacak dizinin eleman sayisini giriniz: ");
    scanf("%d",&n);    
    int dizi[n] , kontrol[n];
    

    for (int i = 0; i < n; i++)
    {
        printf("\nDizinin %d.elemanini giriniz: ",(i+1));
        scanf("%d",&dizi[i]);
    }

    printf("Sayi giriniz: ");
    scanf("%d",&sayi);


    for (int j = 0; j < n; j++)
    {
        kontrol[j] = abs(dizi[j] - sayi);
    }
    
    kucuk = kontrol[0];
    s = dizi[0];
    for (int k = 0; k < n; k++)
    {
        if (kontrol[k] < kucuk)
        {
            kucuk = kontrol[k];
            s = dizi[k];
        }
        
    }
    
    
    

    printf("%d degerine en yakin sayi %.ddir.", sayi , s);
    return 0;
}
