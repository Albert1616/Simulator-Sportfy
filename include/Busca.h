/* #include <vector>
template <typename T>
bool Busca_binaria(int inicio, int fim, T elemento, std::vector<T>& lista);
template <typename T>
bool Busca_iterativa(std::vector<T>& lista,T elemento); 
COMENTADO ATÉ QUE A IMPLEMENTAÇÃO SEJA SEPARADA EM UM ARQUIVO .CPP*/
#ifndef BUSCA_H
#define BUSCA_H
#include <vector>
#include "Musica.h"
#include "Artista.h"

template <typename T>
bool Busca_binaria(int inicio, int fim, T& elemento, std::vector<T>& lista) {
    if (inicio > fim) {
        return false;
    } else {
        int meio = (inicio + fim) / 2;
        if (lista[meio] == elemento) {
            return true;
        } else if (lista[meio] < elemento) {
            return Busca_binaria(meio + 1, fim, elemento, lista);
        } else {
            return Busca_binaria(inicio, meio - 1, elemento, lista);
        }
    }
}

template <typename T>
bool Busca_iterativa(std::vector<T>& lista,T elemento){
    for(int i = 0; i<lista.size(); i++){
        if(lista[i] == elemento){
            return true;
        }
    }
    return false;
}

#endif