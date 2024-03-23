#include<stdio.h>

int main (){

int menu, quantidade, opcao;
float total = 0;

do{

printf("Selecione uma fruta: \n");
printf("1. Abacaxi - 5.00\n");
printf("2. Maca - 1.00\n");
printf("3. Pera - 4.00\n");
scanf("%d", &menu);

switch(menu){

    case 1:
    printf("Quantos Abacaxi deseja? \n");
    scanf("%d", &quantidade);
    total += 5.00 * quantidade;
    break;

    case 2:
    printf("Quantas Macas deseja? \n");
    scanf("%d", &quantidade);
    total += 1.00 * quantidade;
    break;

    case 3:
    printf("Quantas Peras deseja? \n");
    scanf("%d", &quantidade);
    total += 4.00 * quantidade;
    break;

    default:
    printf("Opcão invalida");
    break;

}

  printf("deseja continuar? digite 1 para sim e 0 para nao \n");
  scanf("%d", &opcao);

}while( opcao !=0);

printf("\no total a pagar e: %.2f", total);

return 0;

}





