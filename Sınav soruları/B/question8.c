#include<stdio.h>

/* Kendini 10 kere cagiran rekursif fonksiyon yazin. 
  Sayimi static degiskenle yapin */

static int count = 10;

void recursive_func()
{
  count--;
  if (count > 0)
  {
    recursive_func();
  }
  
}

int main()
{
    recursive_func();
    return 0;
}
