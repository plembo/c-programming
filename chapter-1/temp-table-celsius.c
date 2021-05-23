#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ... 30 *; floating-point version */
main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 100; /* upper limit */
    step = 10;   /* step size */

    celsius = lower;

    printf("degC\tdegF\n");
    printf("----\t----\n");

    while (celsius <= upper) {
        fahr = (celsius * 1.8) + 32;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + step;
    } 
}
