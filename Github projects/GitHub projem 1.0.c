#include <stdio.h>

int main()
{
printf("Baslamak icin Enter tusuna basin...");
getchar();


   /*deðiþkenleri tanýmla*/

    float santimetre,metre,kilometre;


    /*uzunluðu santimetre (cm) cinsinden alýnma*/
    printf("Uzunlugu Santimetre cinsinden yaziniz:");
    scanf("%f",&santimetre);

    /*çevirme iþlemleri gerçekleþtir*/
    metre = santimetre/100.0;
    kilometre = santimetre/100000.0;



    printf("Metre (M) cinsinden uzunluk = %.2f m \n",metre);
    printf("Kilometre (km) cinsinden uzunluk = %.2f m km",kilometre);


    return 0;
}
