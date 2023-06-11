#include<stdio.h>

int main()
{
    int x = 6;     // 00000110

    int y = 18;    // 00010010

    int z = x & y;
    printf("%d\n",z);  // 2

    z = x | y;
    printf("\n%d\n",z); // 22

    z = x ^ y;
    printf("\n%d\n",z); // 20

    z = x << 1;
    printf("\n%d\n",z); // 12

    z = x >> 1;
    printf("\n%d\n",z); // 3

    



    return 0;
}
