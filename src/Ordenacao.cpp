#include "../include/Ordenacao.h"
#include <vector>

template <typename T>
void insertionSort(std::vector<T>& lista){
    for(int i = 1; i<lista.size();i++){
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
void bubleSort(std::vector<T>& lista){
    for(int i = 0; i<lista.size()-1;i++){
        for(int j = 0;j<lista.size()-i-1;j++){
            if(lista[j] > lista[j+1]){
                T swap = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = swap; 
            }
        }
    }
}