#include<stdio.h>

/* Bir integer x dizisinin en buyuk degerini bulan fonksiyon.
   Dizi uzunlugunun parametre olarak giriniz */

int findmax(int array[], int size) 
{
        int max = array[0];
        for (int i = 1; i < size; i++)
        {
            if (array[i]>= max)
            {
                max = array[i];
            }
        }
        
        return max;
}

int main()
{
    int x[9] = {-1, -5, 7, 100, 9, 11, -6, 27, 3};

    printf("x = { ");
    for (int i = 0; i < 9; i++)
    {
        printf("%d, ",x[i]);
    }
    
    printf("}");
    printf("\n\nThe maximum element of this array is: %d",findmax(x,9));



    return 0;
}
