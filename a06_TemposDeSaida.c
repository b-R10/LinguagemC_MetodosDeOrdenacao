#include "library.h"

void BubbleSort1(int *ponteiro, int quantidade)
{
    int aux;
    for(int i=quantidade-1; i>=1; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(ponteiro[j] < ponteiro[j+1])
            {
                aux = ponteiro[j];
                ponteiro[j] = ponteiro[j+1];
                ponteiro[j+1] = aux;
            }
        }
    }
}

void SelectionSort(int *ponteiro, int quantidade)
{
    int aux, menorID;
    for(int i=0; i<quantidade-1; i++)
    {
        menorID = i;
        for(int j=i+1; j<quantidade; j++)
            if(ponteiro[j] < ponteiro[menorID])
                menorID = j;
        aux = ponteiro[i];
        ponteiro[i] = ponteiro[menorID];
        ponteiro[menorID] = aux;
    }
}

int main()
{
    srand(time(NULL));
    int n = 15000;
    int *vetor = malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
        vetor[i] = rand();
    
    // BubbleSort1(vetor, n);
    SelectionSort(vetor, n);
    
    // for(int i=0; i<n; i++)
        // printf("%d ", vetor[i]);

    free(vetor);

    printf("\nTempo de saída = %f segundos", (float)( clock()/CLOCKS_PER_SEC ));

    return 0;
}