
/*
  Bir integer x dizisinin en buyuk degerini bulan fonksiyonu yaziniz. Dizinin uzunlugunu parametre olarak giriniz
*/

#include <stdio.h>

int buyukbul(int *p,int y) 
{
     int enbuyuk = *p;
     for(int i = 0; i < y; i++)
     {
        
     }
     
}


int main()
{
    int x;
    printf("Dizinin uzunlugunu giriniz: ");
    scanf("%d",&x);

    int dizi[x];

    for (int i = 0; i < x; i++)
    {
        printf("Dizinin %d.elemanini giriniz: ",(i+1));
        scanf("%d",&dizi[i]);
        printf("\n");
    }

     printf("Dizinin en buyuk elemani: %d", buyukbul(&dizi[0],x));

    
    return 0;
}
