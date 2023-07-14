#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

using namespace std;
class Musica;

/**
 * @brief Classe Stack que representa uma pilha de elementos.
 */
class Stack{
    private:
        vector<Musica> elementos; /**< Vetor que armazena os elementos da pilha. */
    public:
        /**
         * @brief Destrutor da classe Stack.
         */
        ~Stack();

        /**
         * @brief Verifica se a pilha está vazia.
         * @return true se a pilha estiver vazia, false caso contrário.
         */
        bool isEmpity();

        /**
         * @brief Retorna o elemento no topo da pilha.
         * @return O elemento no topo da pilha.
         */
        string top();

        /**
         * @brief Verifica se um determinado elemento está na pilha.
         * @param elemento O elemento a ser procurado.
         * @return true se o elemento está na pilha, false caso contrário.
         */
        bool find(Musica elemento);

        /**
         * @brief Insere um elemento no topo da pilha.
         * @param elemento O elemento a ser inserido.
         * @return true se o elemento foi inserido com sucesso, false caso contrário.
         */
        bool push(Musica elemento);

        /**
         * @brief Remove o elemento do topo da pilha.
         * @return true se o elemento foi removido com sucesso, false caso contrário.
         */
        bool pop();

        /**
         * @brief Obtém o tamanho da pilha.
         * @return O tamanho da pilha.
         */
        int getSize();

        /**
         * @brief Imprime os elementos da pilha.
         */
        void imprimirElmentos();   
};

#endif
