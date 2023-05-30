#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int x = 7;

    int *xp;

    xp = &x;

    *xp = pow(*xp,2);

    printf("%d",x);
    return 0;
}
