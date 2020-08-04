#include <stdio.h>

int main()
{
    float celcius, fahr;
    float lower, upper, step;

    lower = -10;
    upper = 150;
    step = 10;

    celcius = lower;
    printf("celcius\tfahr\n");
    printf("===============\n");
    while (celcius <= upper) {
        fahr = ((9.0/5.0) * celcius) + 32.0;
        printf("%7.0f\t%4.1f\n", celcius, fahr);
        celcius += step;
    }
    return 0;
}
