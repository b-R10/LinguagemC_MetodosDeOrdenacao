#include "library.h"

void SelectionSort(char *lista, int quantidade)
{
    char aux;
    int menorID;
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

int main()
{
    clock_t t1 = clock(), t2;
    
    char alfabeto[] = "JVPEORJGERLSMKDCKSDC";
    int tamanho = sizeof(alfabeto)/sizeof(alfabeto[0]);
    SelectionSort(alfabeto, tamanho);
    for(int i=0; i<tamanho; i++)
        printf("%c\t", alfabeto[i]);
    
    t2 = clock();
    float tempo = ( (float)t2 - (float)t1 ) / CLOCKS_PER_SEC;

    printf("\nTempo de saída = %f", tempo);

    return 0;
}