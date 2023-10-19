#include<stdio.h>

float converter (float temp) {
    float celsius;
    celsius = (temp - 32,0) * 5 / 9;

    return celsius;

}
main() {

    float tempF = 100;

    float res;
        res = converter(tempF);
        printf("%f", res);
}