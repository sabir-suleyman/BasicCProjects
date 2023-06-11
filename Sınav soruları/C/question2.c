#include<stdio.h>

// Bir karakter dizisinin ASCII karakterlerini arttir Orn. "bursa" ---> "cvstb"

int main()
{
    char ch[] = "bursa";

    char *chptr = ch;

    for ( ; chptr < &ch[5]; chptr++)
    {
        *chptr += 1;
        printf("%c",*chptr);
    }
    

    return 0;
}
