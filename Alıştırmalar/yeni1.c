#include <stdio.h>

void int_Arttir(int *p) 
{
    (*p)++;
}


int main()
{
    int x=3;
    int_Arttir(&x);
    printf("%d",x);
    return 0;
}
