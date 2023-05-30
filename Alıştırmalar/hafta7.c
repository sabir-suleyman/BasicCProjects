#include <stdio.h>


int main()
{
      int s=1;

      while (s <= 10)
      {
         printf("%d",s);
         if (s == 4 || s == 7)
          continue;
        s++;

      }
      
    return 0;
}
