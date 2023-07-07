#include "../include/Ordenacao.h"

template <typename T>
void insertionSort(T& lista,int tamanho){
    for(int i = 1; i<tamanho;i++){
        T key = lista[i];
        int j = i-1;
        while(j >= 0 && lista[i] > key){
            lista[j+1] = lista[j];
            j--;
        }
        lista[j+1] = key;
    }
}

template <typename T>
void bubleSort(T& lista,int tamanho){
    for(int i = 0; i<tamanho-1;i++){
        for(int j = 0;j<tamanho-i-1;j++){
            if(lista[j] > lista[j+1]){
                T swap = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = swap; 
            }
        }
    }
}