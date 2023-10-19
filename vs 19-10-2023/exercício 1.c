#include<stdio.h>
//prototipo de funcao
void imprimir();

int maiorValor(int n1, int n2);

main() {

    //chamada ou invocacao da funcao
    imprimir();

    int numero1, numero2, retornoFuncao;

    printf("Digite os valores: ");
    scanf("%d %d", &numero1, &numero2);

    //chamada da funcao com retorno
    retornoFuncao = maiorValor(numero1, numero2);
    printf("\n O numero maior eh: %d", retornoFuncao);

    imprimir();

}

//implementacao da funcao
void imprimir() {
    printf("Impressao do procedimento...");
}

int maiorValor(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}