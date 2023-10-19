#include<stdio.h>

int somaValores(int vetor[], int n) {
int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += vetor[i];
    }

    return soma;

}

int somarVal(int vetor[5]) {
}

void mostraAlunos(char nomes[tam][20], int qtde) {
    for(int = 0; i < qtde; i++) {
        printf("%s", nomes[i]);
    }
}

main() {

    int v[5] = {1, 3, 4, 5, 7}, res;
    int tam = 5;
    
    //res = somar(v, tam);
    res = somarVal(v);
    //int qtde = 5;
    char nomes[tam][20] = {"Ana", "Maria", "Luca", "Pedro", "Jose"};
    
    mostraAlunos(nomes, tam);

}