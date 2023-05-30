#include <stdio.h>


int kontrolEt(int sayi) {
     
    int toplam = 0;
    for (int i = 1; i < sayi; i++)
    {
        if (sayi%i == 0)
           toplam += i;
    }
    
    if (toplam == sayi)
        return 1;
    else
        return 2;

}


void mukSayilariYaz(int sayi1, int sayi2) 
{
       int temp;
       for (int i = sayi1; i <= sayi2; i++)
       {
        temp = kontrolEt(i);
        if (temp == 1) 
            printf("%d ", i);
        else 
            continue;
       }
}


int main()
{
    int s1,s2;
    printf("Araligin 1.sayisini giriniz: ");
    scanf("%d",&s1);
    printf("Araligin 2.sayisini giriniz: ");
    scanf("%d",&s2);
    
     mukSayilariYaz(s1,s2);
    
    

    return 0;
    
}
