#include <stdio.h>
#include "funcoes.h"

int main() {
    int a, b, c;
    int escolha;
    printf("Digite qual exercicio deseja executar: \n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            break;
        case 2:
            printf("Digite o primeiro numero: \n");
            scanf("%d", &a);
            printf("Digite o segundo numero: \n");
            scanf("%d", &b);
            printf("A soma dos numeros entre %d e %d eh: %d\n", a, b, somarIntervalo(a,b));
            break;
        case 3:
            printf("Digite o primeiro numero: \n");
            scanf("%d", &a);
            printf("Digite o segundo numero: \n");
            scanf("%d", &b);
            printf("Digite o terceiro numero: \n");
            scanf("%d", &c);
            printf("A soma dos numeros divisiveis por %d entre %d e %d eh: %d\n", a, b, c, somarIntervaloDivisiveis(a, b, c));
            break;
    }
}