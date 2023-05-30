#include <stdio.h>


int main()
{
    double D[3] = {-1.2,3.1,-0.4};

    double *ptr;

    ptr = &D[0];
    *ptr = 0;    // ptr[0] = 0
    *(ptr+1) = 7;  // ptr[1] = 7
    *(ptr+2) = 5;  // ptr[2] = 5

    for (int k = 0; k < 3; k++)
    {
        printf("%.2f ",D[k]);

    }
    
    return 0;
}
