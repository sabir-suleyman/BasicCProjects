#include<stdio.h>

// Pointerle 2 integer in degerlerini degistiren fonksiyon
void change(int *xptr, int *yptr)
{ 
    int temp;
    temp = *xptr;
    *xptr = *yptr;
    *yptr = temp;

    printf("\nAfter:\n");
    printf("x: %d\n",*xptr);
    printf("\ny: %d\n",*yptr);

}

int main()
{
    int x,y;
    
    printf("Enter x: ");
    scanf("%d",&x);

    printf("Enter y: ");
    scanf("%d",&y);
 
    printf("\nBefore:\n");
    printf("x: %d\n",x);
    printf("\ny: %d\n",y);

    change(&x,&y);

    return 0;
}
