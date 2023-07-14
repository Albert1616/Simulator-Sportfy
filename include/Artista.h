#ifndef ARTISTA_H
#define ARTISTA_H

#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

class Musica; // Declaração antecipada da classe Musica

/**
 * @brief Classe que representa um artista.
 */
class Artista {
private:
    string nome;        /**< Nome do artista. */
    Stack musicas;      /**< Pilha de músicas do artista. */

public:
    /**
     * @brief Construtor padrão da classe Artista.
     */
    Artista();

    /**
     * @brief Construtor da classe Artista.
     * 
     * @param n Nome do artista.
     */
    Artista(string n);

    /**
     * @brief Destrutor da classe Artista.
     */
    ~Artista();

    /**
     * @brief Obtém o nome do artista.
     * 
     * @return O nome do artista.
     */
    string getNome();

    /**
     * @brief Adiciona uma música à pilha de músicas do artista.
     * 
     * @param m A música a ser adicionada.
     */
    void adicionarMusica(Musica m);

    /**
     * @brief Imprime as músicas do artista.
     */
    void imprimiMusicas();

    /**
     * @brief Sobrecarga do operador de igualdade (==) para comparar dois artistas.
     * 
     * @param a1 O primeiro artista a ser comparado.
     * @param a2 O segundo artista a ser comparado.
     * @return true se os artistas forem iguais, false caso contrário.
     */
    friend bool operator==(const Artista& a1, const Artista& a2);

    /**
     * @brief Sobrecarga do operador de impressão (<<) para exibir um artista.
     * 
     * @param obj O objeto de saída do fluxo.
     * @param m O artista a ser exibido.
     * @return A referência para o objeto de saída do fluxo.
     */
    friend std::ostream& operator<<(std::ostream& obj, const Artista& m);

    /**
     * @brief Sobrecarga do operador de menor que (<) para comparar dois artistas.
     * 
     * @param m1 O primeiro artista a ser comparado.
     * @param m2 O segundo artista a ser comparado.
     * @return true se o primeiro artista for menor que o segundo, false caso contrário.
     */
    friend bool operator<(const Artista& m1, const Artista& m2);

    /**
     * @brief Sobrecarga do operador de maior que (>) para comparar dois artistas.
     * 
     * @param m1 O primeiro artista a ser comparado.
     * @param m2 O segundo artista a ser comparado.
     * @return true se o primeiro artista for maior que o segundo, false caso contrário.
     */
    friend bool operator>(const Artista& m1, const Artista& m2);
};

#endif
