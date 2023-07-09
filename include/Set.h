#ifndef SET_H
#define SET_H

#include <iostream>
#include <vector>
#include "../include/Busca.h"
#include "../include/Artista.h"
#include "../include/Musica.h"

using namespace std;

template <class T>
class Set
{
private:
    vector<T> elementos;

public:
    ~Set<T>();
    bool inserirElemento(T elemento);
    bool removerElemento(T &elemento);
    bool buscarElemento(T &elemento, int TipoBusca = 2);
    void imprimirElementos();
    int getSize();
    vector<T> getElementos();
    void setElementos(std::vector<T> &);
};
template <typename T>
Set<T>::~Set()
{
}
template <typename T>
bool Set<T>::buscarElemento(T &elemento, int TipoBusca)
{
    switch (TipoBusca)
    {
    case 1:
        return Busca_binaria(0, elementos.size() - 1, elemento, elementos);
        break;
    default:
        return Busca_iterativa(elementos, elemento);
        break;
    }
    return false;
}

template <typename T>
bool Set<T>::inserirElemento(T elemento)
{
    if (!this->buscarElemento(elemento))
    {
        elementos.push_back(elemento);
        return true;
    }
    return false;
}
template <typename T>
bool Set<T>::removerElemento(T &elemento)
{
    cout << "Esta aqui" << elemento.getTitulo() << endl;
    for (int i = 0; i < elementos.size(); i++)
    {
        if (elementos[i] == elemento)
        {
            elementos.erase(elementos.begin() + i);
            return true;
        }
    }

    return false;
}

template <typename T>
int Set<T>::getSize()
{
    return this->elementos.size();
}
template <typename T>
void Set<T>::imprimirElementos()
{
    for (int i = 0; i < elementos.size(); i++)
    {
        cout << i << " : " << elementos[i] << endl;
    };
}
template <typename T>
vector<T> Set<T>::getElementos()
{
    return this->elementos;
}
template <typename T>
void Set<T>::setElementos(std::vector<T> &elementos)
{
    this->elementos = elementos;
}

#endif
// PROBLEMÃO: COMO SEPARAR CPP DE H COM TEMPLATE GENÉRICO!!!!!?????