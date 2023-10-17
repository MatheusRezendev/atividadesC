#include <stdio.h>
#include <stdlib.h>

/*usuario digita 20 numeros
salvar em vetor
imprima:
maior
media
soma
pares
impares
desvio padrão
*/

int main(){
    const int n = 20;
    int vetor[n];
    int soma = 0;
    float media = 0;
    int maior = 0;

        printf("Digite 20 numeros:\n");
    
    //soma
    for(int i = 0; i<n; i++){
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    //media
    media = (float)soma / n;

    printf("soma: %d\n", soma);
    printf("media: %2f\n", media);

    //ordem crescente
    for(int i =0; i<n; i++){
        printf("%d\t", vetor[i]);
    }
    //maior
    if(i == 0){
    for(int i = 0; i<n; i++){
        maior = vetor[i] > n;
        printf("maior: %d\n", maior);
    }
    }
}