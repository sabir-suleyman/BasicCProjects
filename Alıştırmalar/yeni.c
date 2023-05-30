#include <stdio.h>


int main () {
    float  ort ;
    float buyuk = 0.0 , kucuk = 100.0, toplam = 0.0 ;
    
    float notlar[20];

    printf("Min not 0 , Max not 100'dur\n");
    
    for (int i = 0; i < 20 ; i++)  {

        printf("%d. ogrencinin notunu giriniz: ",(i+1));
        scanf("%f", &notlar[i]);
        toplam += notlar[i];
        
        
       if ( kucuk  > notlar[i]) {
        
        kucuk = notlar[i];
       } 
       
         if (buyuk < notlar[i]){
        buyuk = notlar[i];
       }
        
        
    }
     
     ort = toplam/20;
     
     printf("Sinif ortalamasi: %.4f\n",ort);
     printf("En buyuk not: %.3f\n", buyuk);
     printf("En kucuk not: %.3f\n", kucuk);
     
    
}