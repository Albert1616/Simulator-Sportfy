#ifndef ORDE_H
#define ORDE_H

#include <vector>

/**
 * @brief Realiza a ordenação por inserção em um vetor.
 * 
 * @tparam T Tipo dos elementos do vetor.
 * @param lista O vetor a ser ordenado.
 */

template <typename T>
void insertionSort(std::vector<T>& lista){
    for(unsigned int i = 1; i<lista.size();i++){
        T key = lista[i];
        int j = i-1;
        while(j >= 0 && lista[j] > key){
            lista[j+1] = lista[j];
            j--;
        }
        lista[j+1] = key;
    }
}

/**
 * @brief Realiza a ordenação por bubble sort em um vetor.
 * 
 * @tparam T Tipo dos elementos do vetor.
 * @param lista O vetor a ser ordenado.
 */

template <typename T>
void bubleSort(std::vector<T>& lista){
    for(unsigned int i = 0; i<lista.size()-1;i++){
        for(unsigned int j = 0;j<lista.size()-i-1;j++){
            if(lista[j] < lista[j+1]){
                T swap = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = swap; 
            }
        }
    }
}

#endif