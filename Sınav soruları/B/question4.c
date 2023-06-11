#include<stdio.h>

/* float x ve char y tiplerini union ile birlestirin 
   ve bu yeni tip ile z degiskeni olusturun  */

union character
    {
        float x;
        char y;
    };
    
int main()
{
    union character z;
    z.x = 1.84;
    z.y = 'A';
    
    printf("\n%.2f",z.x);
    printf("\n%c",z.y);
    return 0;
}
