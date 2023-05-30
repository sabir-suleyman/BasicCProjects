#include <stdio.h>
#include <math.h>

int pisagor(int a,int b, int c)  {

   if ((pow(a,2)+pow(b,2)) == pow(c,2))
        return 1;
   else
        return 0;
}


int main()
{
    int a ,b , c;

    printf("a degerini giriniz: ");
    scanf("%d",&a);

    printf("b degerini giriniz: ");
    scanf("%d",&b);

    printf("c degerini giriniz: ");
    scanf("%d",&c);

    if (pisagor(a,b,c) == 1)

        printf("Saglandi!");
    else
        printf("Saglanmadi...");
    
    return 0;
}
