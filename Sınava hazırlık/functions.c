#include<stdio.h>
#include<math.h>

float square(int a) 
{
    return pow(a,2);
}

int main()
{
    int x;
    printf("Enter an number: ");
    scanf("%d",&x);

    printf("The square of this number is: %.2f",square(x));
    return 0;
}
