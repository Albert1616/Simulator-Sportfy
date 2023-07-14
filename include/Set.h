#ifndef SET_H
#define SET_H

#include <iostream>
#include <vector>
#include "../include/Busca.h"
#include "../include/Artista.h"
#include "../include/Musica.h"

using namespace std;

/**
 * @brief Classe genérica Set que representa uma coleção de elementos únicos.
 *
 * @tparam T Tipo dos elementos no conjunto.
 */
template <class T>
class Set
{
private:
    vector<T> elementos; /**< Vetor que armazena os elementos do conjunto. */

public:
    /**
     * @brief Destrutor da classe Set.
     */
    ~Set<T>();

    /**
     * @brief Insere um elemento no conjunto.
     *
     * @param elemento O elemento a ser inserido.
     * @return true se o elemento foi inserido com sucesso, false caso contrário.
     */
    bool inserirElemento(T elemento);

    /**
     * @brief Remove um elemento do conjunto.
     *
     * @param elemento Referência para o elemento a ser removido.
     * @return true se o elemento foi removido com sucesso, false caso contrário.
     */
    bool removerElemento(T &elemento);

    /**
     * @brief Busca um elemento no conjunto.
     *
     * @param elemento O elemento a ser buscado.
     * @param TipoBusca O tipo de busca a ser realizado (1 para busca binária, outros valores para busca iterativa).
     * @return true se o elemento foi encontrado, false caso contrário.
     */
    bool buscarElemento(T elemento, int TipoBusca = 2);

    /**
     * @brief Imprime os elementos do conjunto.
     */
    void imprimirElementos();

    /**
     * @brief Obtém o tamanho do conjunto.
     *
     * @return O tamanho do conjunto.
     */
    int getSize();

    /**
     * @brief Obtém os elementos do conjunto.
     *
     * @return Um vetor com os elementos do conjunto.
     */
    vector<T> getElementos();

    /**
     * @brief Define os elementos do conjunto.
     *
     * @param elementos O vetor com os elementos a serem definidos.
     */
    void setElementos(std::vector<T> &);
};

template <typename T>
Set<T>::~Set()
{
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
    if (this->buscarElemento(elemento))
    {
        for (unsigned int i = 0; i < elementos.size(); i++)
        {
            if (elementos[i] == elemento)
            {
                elementos.erase(elementos.begin() + i);
                return true;
            }
        }
    }
    return false;
}

template <typename T>
bool Set<T>::buscarElemento(T elemento, int TipoBusca)
{
    switch (TipoBusca)
    {
    case 1:
        this->imprimirElementos();
        cout << endl;
        return Busca_binaria(0, elementos.size() - 1, elemento, elementos);
        break;
    default:
        return Busca_iterativa(elementos, elemento);
        break;
    }
    return false;
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
int Set<T>::getSize()
{
    return this->elementos.size();
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
