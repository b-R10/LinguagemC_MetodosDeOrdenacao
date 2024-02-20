#include "library.h"

void SelectionSort(int *lista, int quantidade)
{
    int aux, menorID;
    for(int i=0; i<quantidade-1; i++)
    {
        menorID = i;
        for(int j=i+1; j<quantidade; j++)
            if(lista[j] < lista[menorID])
                menorID = j;
        aux = lista[i];
        lista[i] = lista[menorID];
        lista[menorID] = aux;
    }
}

int main(){

    int vetor[] = {3, 7, 8, 0, 15, 2, 6, 1};
    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);
    SelectionSort(vetor, tamanhoVetor);
    for(int i=0; i<tamanhoVetor; i++)
        printf("%d \t", vetor[i]);

    return 0;
}