#include <stdio.h>

int main()
{
printf("Baslamak icin Enter tusuna basin...");
getchar();


   /*degiskenleri tanimlama*/

    float santimetre,metre,kilometre;


    /*uzunlugu santimetre (cm) cinsinden alma*/
    printf("Uzunlugu Santimetre cinsinden yaziniz:");
    scanf("%f",&santimetre);

    /*çevirme işlemleri gerçeklestir*/
    metre = santimetre/100.0;
    kilometre = santimetre/100000.0;



   printf("Metre (m) cinsinden uzunluk = %.2f m\n", metre);
   printf("Kilometre (km) cinsinden uzunluk = %.5f km\n", kilometre);

     getchar(); // terminal kapanmasin
     getchar();


    return 0;
}
