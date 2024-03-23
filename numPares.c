#include <stdio.h>

#define START 2
#define END 100 
#define STEP 2 // Incremento de 2 para garantir que o próximo número seja par

int main() {
    int soma = 0; // Variável para armazenar a soma dos números pares
    int contador = 0; // Contador para controlar o número de números pares encontrados
    int i = START;

    while (contador < 50) {
        soma += i; // Adiciona o número atual à soma
        i += STEP; // Incrementa para obter o próximo número par
        contador++; // Incrementa o contador
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    return 0;
}
