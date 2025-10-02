#include <stdio.h>

int main() {
    int numBottles = 15, numExchange = 4;
    int bebidas = 1;
    while( numBottles != 0 ) {
        int resto = numBottles % numExchange;
        int divisao = (numBottles / numExchange) - 1;
        bebidas += numBottles;
        numBottles = resto + divisao;
    }

    int vazias = numBottles;

    printf("Garrafas bebidas: %d\n", bebidas);
    return bebidas;
}