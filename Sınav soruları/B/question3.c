#include<stdio.h>
#include<stdlib.h>

// malloc() ile 20 karakterli bir string olusturup o degiskene "Bursa" yaziniz

int main()
{
    char *name = (char*)malloc(sizeof(char)*20);
    name = "Bursa";
   // printf("\n%s",name);
    
    return 0;
}
