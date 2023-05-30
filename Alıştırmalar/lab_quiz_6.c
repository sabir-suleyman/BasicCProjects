#include <stdio.h>
#include <math.h>



float yanal_alan (float yan_yukseklik , float yaricap) {
      
      return (M_PI*yaricap*yan_yukseklik);
}


float taban_alan(float yaricap1) {
      
       return  (pow(yaricap1,2)*M_PI);
}


float hacim(float yaricap2 , float yukseklik2) {

      return ((M_PI * pow(yaricap2,2)* yukseklik2)/3);
}


float butun_alan (float taban , float yanal) {
      
      return (taban + yanal);

}


int main()
{   
    float h , r , a , t_alan , y_alan;

    printf("\nKoninin yuksekligini giriniz: ");
    scanf("%f",&h);
    
    printf("Koninin yanal yuksekligini giriniz: ");
    scanf("%f",&a);

    printf("Koninin taban yaricapini giriniz: ");
    scanf("%f",&r);
    
    t_alan = taban_alan(r);
    y_alan = yanal_alan(a,r);
    printf("\nKoninin yanal alani: %.2f metrekare\n", y_alan);
    printf("Koninin taban alani: %.2f metrekare\n",t_alan );
    printf("Koninin butun alani: %.2f metrekare\n", butun_alan(t_alan,y_alan));
    printf("Koninin hacmi: %.2f metrekup\n\n", hacim(r,h));


    return 0;
}
