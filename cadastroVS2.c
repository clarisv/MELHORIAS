#include <stdio.h>

int validarSexo(char sexo){
    return sexo == 'm' || sexo == 'M' || sexo == 'f' || sexo == 'F';
}

int validarCorOlhos(char corOlhos){
    return corOlhos == 'a' || corOlhos == 'A' || corOlhos == 'v' || corOlhos == 'V' || corOlhos == 'c' || corOlhos == 'C' || corOlhos == 'p' || corOlhos == 'P';
}

int validarCorCabelo(char corCabelo){
    return corCabelo == 'l' || corCabelo == 'L' || corCabelo == 'c' || corCabelo == 'C' || corCabelo == 'r' || corCabelo == 'R' || corCabelo == 'p' || corCabelo == 'P';
}

int validaIdade(int idade){
    return idade >= 18 && idade <= 35; // Considerando que a idade deve estar entre 18 e 35 anos
}

int validaSalario(float salario){
    return salario >= 0;
}

int main(){

    int totalEspecifico = 0;
    int totalGeral = 0;
    float porcentagem;

    while(1){
        char sexo, corOlhos, corCabelo;
        int idade;
        float salario;

        printf("Digite seu sexo (m/f): ");
        scanf(" %c", &sexo);

        printf("Digite sua cor dos olhos (a/v/c/p): ");
        scanf(" %c", &corOlhos);

        printf("Digite sua cor do pelo (l/c/r/p): ");
        scanf(" %c", &corCabelo);

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        printf("Digite seu salario: ");
        scanf("%f", &salario);

        if (!validarSexo(sexo)) {
            printf("Sexo inválido. Digite 'm' ou 'f'.\n");
            continue;
        }

        if (!validarCorOlhos(corOlhos)) {
            printf("Cor dos olhos inválida. Digite 'a', 'v', 'c' ou 'p'.\n");
            continue;
        }

        if (!validarCorCabelo(corCabelo)) {
            printf("Cor do cabelo inválida. Digite 'l', 'c', 'r' ou 'p'.\n");
            continue;
        }

        if (!validaIdade(idade)) {
            printf("Idade inválida. Digite uma idade entre 18 e 35 anos.\n");
            continue;
        }

        if (!validaSalario(salario)) {
            printf("Salário inválido. Digite um valor não negativo.\n");
            continue;
        }

        totalGeral++;

        if ((sexo == 'f' || sexo == 'F') && idade >= 18 && idade <= 35 && (corOlhos == 'c' || corOlhos == 'C') && (corCabelo == 'c' || corCabelo == 'C')) {
            totalEspecifico++;
        }

        printf("Deseja continuar (s/n)? ");
        char continuar;
        scanf(" %c", &continuar);
        if (continuar == 'n' || continuar == 'N') {
            break;
        }
    }

    if (totalGeral > 0){
        porcentagem = (float)totalEspecifico / totalGeral * 100;
        printf("A porcentagem de mulheres entre 18 e 35 anos com olhos e cabelos castanhos é de: %.2f%%\n", porcentagem); 
    } else {
        printf("Nenhuma pessoa foi cadastrada.\n");
    }

    return 0;
}
