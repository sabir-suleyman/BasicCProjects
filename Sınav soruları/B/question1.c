#include<stdio.h>
#include<math.h>

// Bir degiskenin karesini alip kendi uzerine yazan fonksiyon (Pointer ile)

void kareal(int *xptr) 
{
    *xptr = pow(*xptr,2); 
    printf("%d",*xptr);
}

int main()
{
    int x= 7;
    kareal(&x);
    return 0;
}
