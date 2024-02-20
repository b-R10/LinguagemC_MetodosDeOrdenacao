#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

// float ContarTempo(){
//     clock_t t1 = clock();
//     delay(1000);
//     clock_t t2 = clock();
//     return ( (float)t2 - (float)t1 ) / CLOCKS_PER_SEC; 
// }

void BubbleSort(int vetor[], int quantidade){
    int i, j, aux;
    for(i=quantidade-1; i>=1; i--){
        for(j=0; j<i; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

void BubbleSort_Melhorado(int vetor[], int quantidade){
    int i, j, aux, troca = 1;                               // troca é verdadeiro ou falso
    for(i=quantidade-1; (i>=1) && (troca); i--){
        troca = 0;
        for(j=0; j<i; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                troca = 1;
            }
        }
    }
}