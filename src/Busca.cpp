#include "../include/Busca.h"
#include <vector>
#include "../include/Musica.h"
#include "../include/Artista.h"

template <typename T>
bool Busca_binaria(int inicio, int fim, T elemento,std::vector<T>& lista){
    if(fim < inicio){
        return false;
    }else{
        int meio = (inicio + fim)/2;
        if(lista[meio] > elemento){
            return Busca_binaria(inicio, meio-1, elemento, lista);
        }else if(lista[meio] < elemento){
            return Busca_binaria(meio+1, fim,elemento,lista);
        }else{
            return true;
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
/* template <>
bool Busca_iterativa(std::vector<Musica>& lista,Musica elemento){
    for(int i = 0; i<lista.size(); i++){
        if(lista[i].getTitulo() == elemento.getTitulo()){
            return true;
        }
    }
    return false;
}
template <>
bool Busca_iterativa(std::vector<Artista>& lista,Artista elemento){
    for(int i = 0; i<lista.size(); i++){
        if(lista[i].getNome() == elemento.getNome()){
            return true;
        }
    }
    return false;
} */