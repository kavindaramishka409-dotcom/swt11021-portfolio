#include <stdio.h>
int main() {
    const double km_to_Miles  = 0.621371;
    const double km_to_meters = 1000.0;
    const double km_to_cm     = 100000.0;
    const double kelvin_offset= 273.15;

    double kilometers,celsius;
    double miles,meters,centimeters;
    double fahrenheit, kelvin;

    printf("\n");
    printf("\n");

    printf("===disatance and temperature converter===\n\n");

    

    printf("enter the disatance kilometer = ");
    scanf("%lf", &kilometers);
    printf("\n");

    miles = kilometers * 0.621371 ;
    meters = kilometers * 1000.0;
    centimeters = kilometers * 100000.0;

     printf("miles       : %2f\n",miles);
     printf("meters      : %2f\n",meters);
     printf("centimeters : %2f\n",centimeters);
     printf("\n");

     printf("--------------------------------------\n");
     printf("\n");
     printf("\n");

     printf("enter the disatance celsius = ");
     scanf("%lf",&celsius);
     printf("\n");

      fahrenheit = (celsius * 9 / 5) + 32;
       kelvin    = celsius + 273.15;

       printf("fahrenheit : %.2f\n",fahrenheit);
       printf("kelvin     : %.2f\n",kelvin);




    return 0;
}
