
/*
  Bir stringin karakterlerini tersten yazan fonksiyonu yaziniz. 
  Ornek x = terstenyaz("bursa");
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void terstenyaz(char *isimptr, int size) 
{
    for (; &isimptr[0] <= isimptr; isimptr--)
    {
      printf("%s",*isimptr);
    }
    

}


int main()
{
    char isim[10] = "bursa";
    
    terstenyaz(&isim[4],5);
    return 0;
}
