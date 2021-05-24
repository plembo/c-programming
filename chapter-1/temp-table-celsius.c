#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ... 30 *; floating-point version */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -10;   /* lower limit of temperature table */
    upper = 40; /* upper limit */
    step = 2;   /* step size */

    celsius = lower;

    printf("degC\tdegF\n");
    printf("-----\t-----\n");

    while (celsius <= upper) {
        fahr = (celsius * 1.80) + 32.00;
        printf("%.1f\t%.1f\n", celsius, fahr);
        celsius = celsius + step;
    } 
}
