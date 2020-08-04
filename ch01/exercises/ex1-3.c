#include <stdio.h>

/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */

int  main()
{
    float fahr, celcius;
    float upper, lower, step;
    step = 20;
    upper = 300;
    lower = 0;

    printf("fahr\tcelcius\n");
    printf("===============\n");
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f \t%7.1f\n", fahr, celcius);
        fahr += step;
    }

    return 0;
}
