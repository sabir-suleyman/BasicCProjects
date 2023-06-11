#include<stdio.h>

// Bir degiskeni kalici olarak pointerle degerini bir arttiran fonksiyon


void increase(int *number) 
{
    *number = *number+1;
   printf("%d",*number);
}

int main()
{
    int num;

    num = 5;

    increase(&num);
    return 0;
}
