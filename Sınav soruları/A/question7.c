#include<stdio.h>    
#include<stdlib.h>
#include <math.h>    
#include<time.h>

// 2X3 Matrisine rastgele -1 ve 1 yaz
int main()
{
    srand(time(0));
    int matrix[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             matrix[i][j] = pow(-1,rand());
        }
    }
    

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             printf("%3d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
