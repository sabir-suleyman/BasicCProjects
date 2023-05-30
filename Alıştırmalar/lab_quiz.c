#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool durum = true;
    int x,ans;
    int z=0;
    int ans1;
    
    printf("Olusturulacak dizinin elemanini giriniz: ");
    scanf("%d",&x);

    int dizi[x];

    for (int i = 0; i < x; i++)
    {
        printf("Dizinin %d.elemanini giriniz: ", (i+1));
        scanf("%d",&dizi[i]);
    }
    

do
   {

    printf("\nAramak istediginiz degeri girninz: ");
    scanf("%d",&ans);

        for (int j = 0; j < x; j++)
            {
                if(dizi[j] == ans) 
                {
        
                printf("Aradiginiz eleman dizinin %d.endeksinde!", j);
                z++;
                break;
                }
    
            }
    
        if (z == 0)
        {
        printf("Maalesef aradiginiz deger dizide yok.");
        }
    
    
        printf("\nDevam etmek istiyor musunuz? : ");
        scanf("%d",&ans1);    

        if (ans1 == 0)
        {

            durum = false;
        } else
        {
            continue;
        }
        
   } while (durum);
   
printf("\nBitti..");
   
        return 0;
}
