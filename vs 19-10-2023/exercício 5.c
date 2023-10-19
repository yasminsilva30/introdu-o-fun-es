#include<stdio.h>

void calcularVolumeEsfera() {
    float pi = 1415, raio, res;
    printf("Digite o raio: ");
    scanf("%f", &raio);

    res = 4 / 3 * pi * (raio * raio * raio);

    printf("O volume da esfera eh: %f", res);
}

main() {

    calcularVolumeEsfera();

}