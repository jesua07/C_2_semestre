#include "funcoes.h"

int somarIntervalo(int n1, int n2){
    int i = n1 + 1;
    int soma = 0;
    for (i = i; i < n2; i++){
        soma += i;
    }
    return soma;
}

int somarIntervaloDivisiveis(int a, int b, int c){
    int i = b + 1;
    int soma = 0;
    if (a < 1){
        return 0;
    }
    for (i = i; i < c; i++){
        if (i % a == 0){
            soma += i;
        }
    }
    return soma;
}
