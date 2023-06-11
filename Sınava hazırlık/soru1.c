
/* 
   Bir degiskenin karesini alip kendi uzerine yazan (isaretci ile) fonksiyonu yaziniz.
   Ornek int x = 7;   kareal(&x);
*/

#include <stdio.h>
#include <math.h>

void kareal(int *xp) 
{
   *xp = pow(*xp,2);  
   printf("%d",*xp);
}

int main()
{
    int x = 7;
    kareal(&x);
    return 0;
}
