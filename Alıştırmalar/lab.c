#include <stdio.h>

// IKI MATRIS CARPIMI  
int main()
{
    int matrisA[3][3];
    int matrisB[3][3];
    int matrisC[3][3];

    // A MATRIS ELEMAN GIRIS

    printf("A matrisinin :\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d. satir %d. sutun elemanini giriniz: ",(i+1),(j+1));
            scanf("%d",&matrisA[i][j]);
        }    
    }

    // B MATRIS ELEMAN GIRIS
    
    printf("B matrisinin :\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d. satir %d. sutun elemanini giriniz: ",(i+1),(j+1));
            scanf("%d",&matrisB[i][j]);
        }    
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrisC[i][j] = 0;
        }
    }
    
    
    // CARPIM

    for (int i = 0; i < 3; i++)   //matrisC[i][j] +=(matrisA[j][k]*matrisB[k][j]);
            {
               for (int j = 0; j < 3; j++)
                {
                   for (int k = 0; k < 3; k++)
                    {
                        matrisC[i][j] +=matrisA[i][k]*matrisB[k][j];
                    }
                }
            }
            
    printf("\n\n");

    //A MATRIS EKRANA YAZDIRMA

    printf("A matrisi: \n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",matrisA[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    //B MATRIS EKRANA YAZDIRMA

    printf("B matrisi: \n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",matrisB[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    //MATRIS EKRANA YAZDIRMA
    
    printf("C matrisi: \n\n");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",matrisC[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
