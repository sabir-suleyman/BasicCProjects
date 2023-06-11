#include<stdio.h>

// Ozyinelemeli fonksiyonla 3 den geriye dogru yazdirmak 1 dahil

void printnum(int num)
{
    if (num != 0)
    {
        printf("%d ",num);
        printnum(num-1);
    }

}

int main()
{
    int num = 3;
    printnum(num);
    return 0;
}
