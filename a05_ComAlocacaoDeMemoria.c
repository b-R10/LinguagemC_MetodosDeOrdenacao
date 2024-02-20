#include "library.h"

void SelectionSort(int *vetor1, int tamanho);

int main()
{
    srand(time(NULL));          // inicia o gerador de números aleatórios com a hora atual do computador
                                // biblioteca: time.h
    int n = 15;
    int *vetor = malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
        vetor[i] = rand();

    SelectionSort(vetor, n);
    for(int i=0; i<n; i++)
        printf("%d ", vetor[i]);
    free(vetor);

    // Calcular o tempo de processamento;
    float pulsos = clock();         // quantidade de pulsos de clock que o processador executou a partir do instante
                                    // em que o programa foi inicializado até o momento em que clock() foi chamada

    printf("\nTempo de saída = %f", pulsos/CLOCKS_PER_SEC);

    return 0;
}

void SelectionSort(int *vetor1, int tamanho)
{
    int aux, menorID;
    for(int i=0; i<tamanho-1; i++)
    {
        menorID = i;
        for(int j=i+1; j<tamanho; j++)
            if(vetor1[j] < vetor1[menorID])
                menorID = j;
        aux = vetor1[i];
        vetor1[i] = vetor1[menorID];
        vetor1[menorID] = aux;
    }
}