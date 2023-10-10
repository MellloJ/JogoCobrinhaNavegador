#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int tam = 0, soma = 0, *vet, i = 0;
    float media = 0;

    printf("Digite o tamanho desejado do vetor: \n");
    scanf(" %d", &tam);

    vet = malloc(tam * sizeof(int));

    for(i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posição vet[%d]: \n", i);
        scanf(" %d", &vet[i]);
    }

    for(i = 0; i < tam; i++){
        soma += vet[i];
    }

    media = (float) soma/tam;

    printf("\nA média de todos os valores digitados é de: %.2f", media);

    return 0;
}
