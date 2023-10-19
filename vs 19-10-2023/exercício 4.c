#include<stdio.h>

float calcularVolume (float raio, float altura) {
    float pi = 3,14;
    float volume = pi * (raio * raio) * altura;
    return volume;
}

main() {

    float R = 10, A = 12;
    float result = calcularVolume(R, A);
    printf("%f", result);
}