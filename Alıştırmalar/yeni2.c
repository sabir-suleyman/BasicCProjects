#include <stdio.h>

void int_degistir(int *p1 ,int *p2) 
{
  int bos;

  bos = *p1;

  *p1 = *p2;

  *p2 = bos;

}

int main()
{
    int x , y;

    x=3;
    y=5;
    int *px ,*py;

    px = &x;
    py = &y;

    int_degistir(px,py);
    printf("x = %d  y = %d ",x,y);
    return 0;
}
