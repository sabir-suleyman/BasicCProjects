#include <stdio.h>

int main()
{
    int i = 1;
    while (1)
    {
        if (i%2 == 0)
        {
            printf("1");
        } else {
            printf("-1");
        }
        i++;
    }
    

    return 0;
}
