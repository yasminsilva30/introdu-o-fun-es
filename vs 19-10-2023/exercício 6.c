#include<stdio.h>

float calcIMC() {
    float peso, altura, imc;
    printf("Digite o peso e a altura: ");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    return imc;

}

void forSituacao() {
    float imc = calcIMC();

    if (imc < 16) {
        printf("Magro");
    } else if (imc >= 16 && imc < 25) {
        printf("Peso normal");
    } else {
        printf("Acima do peso");
    }

    return imc;
    
}

main(){

    verSituacao();
    calcIMC();

}