#ifndef BUSCA_H
#define BUSCA_H
#include <vector>
#include "Musica.h"
#include "Artista.h"

/**
 * @brief Realiza uma busca binária em um vetor ordenado.
 * 
 * @tparam T Tipo dos elementos do vetor.
 * @param inicio O índice de início da busca.
 * @param fim O índice de fim da busca.
 * @param elemento O elemento a ser buscado.
 * @param lista O vetor ordenado onde a busca será realizada.
 * @return true se o elemento foi encontrado, false caso contrário.
 */

template <typename T>
bool Busca_binaria(int inicio, int fim, T elemento, std::vector<T>& lista) {
    if (inicio > fim) {
        return false;
    } else {
        int meio = (inicio + fim) / 2;
        if(lista[meio] == elemento){
            return true;
        }
        else if(lista[meio] < elemento) {
            return Busca_binaria(inicio, meio - 1, elemento, lista);
        }else if(lista[meio] > elemento){
            return Busca_binaria(meio + 1, fim, elemento, lista);
        }
    }
    return false;
}

/**
 * @brief Realiza uma busca iterativa em um vetor.
 * 
 * @tparam T Tipo dos elementos do vetor.
 * @param lista O vetor onde a busca será realizada.
 * @param elemento O elemento a ser buscado.
 * @return true se o elemento foi encontrado, false caso contrário.
 */

template <typename T>
bool Busca_iterativa(std::vector<T>& lista,T elemento){
    for(unsigned int i = 0; i<lista.size(); i++){
        if(lista[i] == elemento){
            return true;
        }
    }
    return false;
}

#endif