#ifndef SET_H
#define SET_H

#include <iostream>
#include <vector>
#include "../include/Busca.h"

using namespace std;

template <class T>
class Set{
    private:
        vector<T> elementos;
    public:
        ~Set<T>();
        bool inserirElemento(T elemento);
        bool removerElemento(T elemento);
        bool buscarElemento(T elemento);
        void imprimirElementos();
        int getSize();
};

template <typename T>
Set<T>::~Set(){
    elementos = nullptr;
};
template <typename T>
bool Set<T>::buscarElemento(T elemento){
    int TipoBusca;
    cout << "Qual tipo de busca vc deseja fazer?" << endl;
    cout << "1 : binaria ou 2 : iterativa ?" << endl;
    cout << "0 : SAIR" << endl; 
    cin >> TipoBusca;

    while(TipoBusca!=1 && TipoBusca!=2 & TipoBusca!=0){
        cout << "Digite uma opcao valida!" << endl;
        cout << "Qual tipo de busca vc deseja fazer?" << endl;
        cout << "1 : binaria ou 2 : iterativa ?" << endl;
        cout << "0 : SAIR" << endl; 
        cin >> TipoBusca;
    }
    switch (TipoBusca)
    {
    case 1:
        return Busca_binaria(0, elementos.size()-1, elemento, elementos);
        break;
    case 2:
        return Busca_iterativa(elementos, elemento);
        break;
    default:
        cout << "Saindo..." << endl;
        return false;
        break;
    }
}

template <typename T>
bool Set<T>::inserirElemento(T elemento){
    if(!this->buscarElemento(elemento,0)){
        elementos.push_back(elemento);
        return true;
    }
};
template <typename T>
bool Set<T>::removerElemento(T elemento){
    if(this->buscarElemento(elemento,0)){
        for(int i = 0; i<elementos.size();i++){
            if(elementos[i] == elemento){
                elementos.erase(elementos.begin() + i);
                return true;
            }
        }
    }
    return false;
};
template <typename T>
int Set<T>::getSize(){
    return this->elementos.size();
};
template <typename T>
void Set<T>::imprimirElementos(){
    for(int i = 0; i<elementos.size();i++){
        cout << elementos[i] << endl;
    };
}

#endif
//PROBLEMÃO: COMO SEPARAR CPP DE H COM TEMPLATE GENÉRICO!!!!!?????