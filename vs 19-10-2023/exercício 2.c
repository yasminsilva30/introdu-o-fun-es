#include<stdio.h>
#include<string.h>

void mostraMes(int num) {
    int dias;
    char nomeMes[15];
    
    switch (num) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        dias = 31;
        if (num == 1) {
            strcpy(nomeMes, "Janeiro");
        } else if (num == 3) {
            strcpy(nomeMes, "Marco");
        } else if (num == 5) {
            strcpy(nomeMes, "Maio");
        } else if (num == 7) {
            strcpy(nomeMes, "Julho");
        } else if (num == 8) {
            strcpy(nomeMes, "Agosto");
        } else if (num == 10) {
            strcpy(nomeMes, "Outubro");
        } else {
            strcpy(nomeMes, "Dezembro");
        }
        break;

        case 4: case 6: case 9: case 11:
        dias = 30;
        if (num == 4) {
            strcpy(nomeMes, "Abril");
        } else if (num == 6) {
            strcpy(nomeMes, "Junho");
        } else if (num == 9) {
            strcpy(nomeMes, "Setembro");
        } else {
            strcpy(nomeMes, "Novembro");
        }
        break;

        case 2:
        dias = 28;
        strcpy(nomeMes, "Fevereiro");
        break;

        default:
            printf("Mes invalido");
    } //fim do switch

    printf("Mes %s: ", nomeMes);
    printf("Dias %s: ", dias);
    
} // fim da função

main() {

    int n = 2;
    mostraMes(n);

}