/*
    MAIS SIMPLES, PORÉM, MENOS EFICIENTE
    É o método por troca(compara e troca)
    Analisa elemento por elemento, comparando um elemento com seu próximo.
    Os últimos são os primeiros a ser ajustados.
*/

/*
    Ordenar vetor com caracteres alfabeticamente
    E, A, I, U, O, I
        compara E, A
        se E < A --> Trocar E por A
        compara E, I
        se E < i --> Trocar E por I
*/

/*
    2 for
        externo: quantidade de elementos
        interno: avalia os elementos adjacentes
*/

#include "library.h"

void BubbleSort1(int v[], int qntd){
    int i, j, aux;
    for(i=qntd-1; i>=1; i--){
        for(j=0; j<i; j++){
            if (v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void BubbleSort2(int v[], int qntd){
    int aux;
    for(int i=qntd-1; i>=1; i--){
        for(int j=0; j<i; j++){
            if (v[j] < v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

int main(){
    int vetor[] = {2, 27, 0, -1, 10, 15};
    
    BubbleSort1(vetor, 6);
    for(int i=0; i<6; i++)
        printf("%d ", vetor[i]);
    
    BubbleSort2(vetor, 6);
    for(int i=0; i<6; i++)
        printf("%d ", vetor[i]);
    
    return 0;
}
