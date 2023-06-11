
/*
 4x5 lik matris olusturup her hucresine rastgele 1 veya 0 yazdirin
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int matris[4][5];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matris[i][j] = pow((-1),(int)(rand()));
        }
        
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
