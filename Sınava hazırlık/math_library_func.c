#include<stdio.h>
#include<math.h>

int main()
{

    /*
    int a;
    float b;
    float c;
    float d;
    float e;
    a = pow(3,5);
    b = sqrt(16);  
    c = log(2);    // Logarithm func. (ln())
    d = round(2.5);
    e = tan(45);

    printf("%d\n",a);
    printf("%.1f\n",b);
    printf("%.1f\n",c);
    printf("%.1f\n",d);
    printf("%.1f\n",e);
    
    */

   float a,b,c;

   printf("\nPlease enter a: ");
   scanf("%f",&a);

   printf("\nPlease enter b: ");
   scanf("%f",&b);


   c = sqrt(pow(a,2)+pow(b,2));

   printf("\nc is: %.2f\n",c);
    return 0;
}
