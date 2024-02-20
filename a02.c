/*
Ordene o vetor [2, 27, 0, -1, 10, 15], utilizando o metodo de ordenaçao Bubble sort em ordem crescente e decrescente.

Ordene a palavra ORDENAR em ordem alfabetica, utilizando o metodo de ordenaçao Bubble sort.

Utilize alocação dinâmica
*/

#include "library.h"

void BubbleSort1_string(char vetor[], int tamanho){
    char aux;
    for(int i=tamanho-1; i>=1; i--){
        for(int j=0; j<i; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

void BubbleSort1_crescente(int vetor[], int tamanho){
    for(int i=tamanho-1; i>=1; i--){
        for(int j=0; j<i; j++){
            if(vetor[j] > vetor[j+1]){
                int aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

void BubbleSort1_decrescente(int vetor[], int tamanho){
    for(int i=tamanho-1; i>=1; i--){
        for(int j=0; j<i; j++){
            if(vetor[j] < vetor[j+1]){
                char aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

void caso1(){
    char palavra[] = "ORDENAR";
    char *vetor = malloc(sizeof(palavra)); // Aloca espaco para armazenar a palavra
    for(int i=0; i<(int)sizeof(palavra); i++){
        vetor[i] = palavra[i];
    }
    BubbleSort1_string(vetor, (int)sizeof(vetor)-1);
    for(int i=0; i<(int)sizeof(palavra); i++)
        printf("%c", vetor[i]);
    printf("\n");
    free(vetor);
}

void caso2(){
    int numeros[] = {2, 27, 0, -1, 10, 15};
    int *vetor = malloc(6*sizeof(int));
    for(int i=0; i<6; i++)
        vetor[i] = numeros[i];
    
    BubbleSort1_crescente(vetor, 6);
    for(int i=0; i<6; i++)
        printf("%d, ", vetor[i]);
    printf("\n");

    BubbleSort1_decrescente(vetor, 6);
    for(int i=0; i<6; i++)
        printf("%d, ", vetor[i]);
}


int main(){
    caso1();
    caso2();
    return 0;
}