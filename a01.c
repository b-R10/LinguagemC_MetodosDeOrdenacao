#include "library.h"

void BubbleSort1_crescente(char *vetor, int quantidade){
    int aux;
    for(int i=quantidade-1; i>=1; i--){
        for(int j=0; j<i-1; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

int main(){
    char palavra[] = "ORDENAR";
    BubbleSort1_crescente(&palavra, sizeof(palavra));
    printf("%s", palavra);
    return 0;
}