#include <stdio.h>
# include <math.h>

int fakt(int n) {
    int fakt = 1;

    for (int i = 1; i <= n; i++)
    {
        fakt *= i;
    }
    
    return fakt;
}

int main() {
   double x ;
   double s = 0.0;
   
   printf("X degerini giriniz: ");
   scanf("%lf",&x);
   for (int i = 1; i <= 1000; i++)
   {
       s += pow(x,i) / fakt(i);
   }
      
    printf("Sonuc: ", s);
    printf("\n");
}
