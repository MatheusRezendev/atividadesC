#include<stdio.h>

int main(){

    int dia, mes, ano;

//Solicita as informações do usuario

    printf("Digite o dia:\n");
    scanf("%d", &dia);
    if(dia < 0 || dia > 31){
        printf("Opcao invalida\n");
        return 0;
    }
    printf("Digite o mes:\n");
    scanf("%d", &mes);
    if(mes < 0 || mes > 12){
        printf("Opcao invalida\n");
    }
    printf("Digite o ano:\n");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        printf("e bissexto");
    }else if(ano % 4 != 0){
        printf("nao e bissexto");
    }





}