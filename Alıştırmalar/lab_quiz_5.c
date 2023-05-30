#include <stdio.h>
#include <math.h>


int main()
{
    double diskriminant;
    float x,x1,x2;
    int a,b,c;


    printf("A degerini giriniz:");
    scanf("%d",&a);

    printf("\nB degerini giriniz:");
    scanf("%d",&b);

    printf("\nC degerini giriniz:");
    scanf("%d",&c);

    printf("%dx^2 + %dx + %d\n" , a,b,c);

    diskriminant = pow(b,2) - (4*a*c);


    if (diskriminant > 0)
    {

        x1 = (-b + sqrt(diskriminant))/(2*a);
        x2 = (-b - sqrt(diskriminant))/(2*a);
        printf("Diskriminant 0 dan buyuktur ve denklemin 2 koku vardir.\n");
        printf("x1 : %f", x1);
        printf("\nx2 : %f", x2);

    } else if (diskriminant == 0)
    {

        printf("Diskriminant 0 a esittir ve denklemin 1 koku vardir.\n");
        x = (-b)/(2*a);
        printf("x : %f", x);

    } else if (diskriminant < 0)
    {

        printf("Diskriminant 0 dan kucuktur ve denklemin reel koku yoktur.\n");

    }

    return 0;
}
