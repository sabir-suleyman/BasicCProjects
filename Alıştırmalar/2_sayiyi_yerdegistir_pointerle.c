#include <stdio.h>

/*   Pointerle 2 sayiyi degistirme    */

void change(int *xp, int *yp)

{
    int temp;

    temp = *xp;

    *xp = *yp;

    *yp = temp;
}

int main()

{
    int x,y;
    
    printf("X i gir: ");
    scanf("%d",&x);
    printf("Y i gir: ");
    scanf("%d",&y);

    change(&x,&y);

    printf("X : %d\n",x);
    printf("Y : %d\n",y);


    return 0;

}

