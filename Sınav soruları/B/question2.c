#include<stdio.h>
#include<string.h>

// Bir Stringin karakterlerini tersten yazdiran fonksiyon

void reverse(char cityname[], int size)
{
    for (int i = size-1 ; i >= 0 ; i--)
    {
        printf("%c",cityname[i]);
    }
    
}

int main()
{
    char city[5] = "bursa";
    
    
    reverse(city,5);
    
    return 0;
}
