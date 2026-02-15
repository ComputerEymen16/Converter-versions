#include <stdio.h>

int main()
{
printf("Press Enter to start...");
getchar();


   /*Define variables*/

    float centimeter, meter, kilometer;


    /*Write the length in centimeters (cm)*/
    printf("Write the length in centimeters: ");
    scanf("%f",&centimeter);

    /*perform translation operations*/
    meter = centimeter/100.0;
    kilometer = centimeter/100000.0;



    printf("Length in meters: %.2f m\n", meter);
    printf("Length in kilometers: %.2f km\n", kilometer);


    return 0;
}

