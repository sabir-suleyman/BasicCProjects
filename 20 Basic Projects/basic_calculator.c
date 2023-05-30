#include <stdio.h>

/*
A program that can perform simple four operations 
*/
int main(int argc, char const *argv[])
{
    int op,x,y;
    float ans;
    
    printf("First of all enter the numbers;\n\nx:");
    scanf("%d",&x);
    printf("\n\ny:");
    scanf("%d",&y);

    label1:

    printf("\nSecondly, choose one of these oprations;\n\n1)+\n\n2)-\n\n3)*\n\n4)/\n\n5)mod()\n\ninput: ");
    scanf("%d",&op);
    
    
    {

    switch (op)
    {
    case 1:
        printf("%d + %d = %d",x,y,(x+y));
        break;
    case 2:
        printf("%d - %d = %d",x,y,(x-y));
        break;
    case 3:
        printf("%d * %d = %d",x,y,(x*y));
        break;
    case 4:
        ans = (float)x/y;
        printf("%d / %d = %.2f",x,y,ans);
        break;
    case 5:
        printf("mod(%d,%d) = %d",x,y,(x%y));
        break;
    default:
        printf("You entered undefined operations!..");
        goto label1;
        break;
    }

    }
    return 0;
}
