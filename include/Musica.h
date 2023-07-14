#ifndef MUSICA_H
#define MUSICA_H

#include <ostream>
#include <string>
#include "Artista.h"
using namespace std;

class Artista; // Declaração antecipada da classe Artista

/**
 * @brief Classe que representa uma música.
 */
class Musica {
private:
    string titulo;                  /**< Título da música. */
    Artista artista;                /**< Artista da música. */
    int anoLancamento;              /**< Ano de lançamento da música. */
    string genero;                  /**< Gênero da música. */
    int numeroReproducoes;          /**< Número de reproduções da música. */

public:
    /**
     * @brief Construtor padrão da classe Musica.
     */
    Musica();

    /**
     * @brief Construtor da classe Musica.
     * 
     * @param t Título da música.
     * @param ano Ano de lançamento da música.
     * @param g Gênero da música.
     * @param numprod Número de reproduções da música.
     * @param a Artista da música (opcional, padrão é "Desconhecido").
     */
    Musica(string t, int ano, string g, int numprod, Artista a = Artista("Desconhecido"));

    /**
     * @brief Destrutor da classe Musica.
     */
    ~Musica();

    /**
     * @brief Obtém o título da música.
     * 
     * @return O título da música.
     */
    string getTitulo();

    /**
     * @brief Define o artista da música.
     * 
     * @param a O artista a ser definido.
     */
    void setArtista(Artista& a);

    /**
     * @brief Obtém o artista da música.
     * 
     * @return O artista da música.
     */
    Artista getArtista();

    /**
     * @brief Obtém o ano de lançamento da música.
     * 
     * @return O ano de lançamento da música.
     */
    int getAnoLancamento();

    /**
     * @brief Obtém o número de reproduções da música.
     * 
     * @return O número de reproduções da música.
     */
    int getnumeroReproducoes();

    /**
     * @brief Obtém o gênero da música.
     * 
     * @return O gênero da música.
     */
    string getGenero();

    /**
     * @brief Sobrecarga do operador de igualdade (==) para comparar duas músicas.
     * 
     * @param m1 A primeira música a ser comparada.
     * @param m2 A segunda música a ser comparada.
     * @return true se as músicas forem iguais, false caso contrário.
     */
    friend bool operator==(const Musica& m1, const Musica& m2);

    /**
     * @brief Sobrecarga do operador de impressão (<<) para exibir uma música.
     * 
     * @param obj O objeto de saída do fluxo.
     * @param m A música a ser exibida.
     * @return A referência para o objeto de saída do fluxo.
     */
    friend std::ostream& operator<<(std::ostream& obj, const Musica& m);

    /**
     * @brief Sobrecarga do operador de menor que (<) para comparar duas músicas.
     * 
     * @param m1 A primeira música a ser comparada.
     * @param m2 A segunda música a ser comparada.
     * @return true se a primeira música for menor que a segunda, false caso contrário.
     */
    friend bool operator<(const Musica& m1, const Musica& m2);

    /**
     * @brief Sobrecarga do operador de maior que (>) para comparar duas músicas.
     * 
     * @param m1 A primeira música a ser comparada.
     * @param m2 A segunda música a ser comparada.
     * @return true se a primeira música for maior que a segunda, false caso contrário.
     */
    friend bool operator>(const Musica& m1, const Musica& m2);
};

#endif
