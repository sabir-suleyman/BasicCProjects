#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// 4x5 matris olustur ve her hucresine dongu ile 0 ve 1 yazdir
int main()
{
    srand(time(0));

    int matrix[4][5];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j] = rand()%2;
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%-2d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
