#ifndef MUSICA_H
#define MUSICA_H

#include <ostream>
#include <string>
#include "Artista.h"
using namespace std;

class Musica{
    private:
        string titulo;
        Artista artista;
        int anoLancamento;
        string genero;
        int numeroReproducoes;
    public:
        Musica();
        Musica(string t,int ano, string g,int numprod,Artista a = Artista("Desconhecido"));
        ~Musica();
        string getTitulo();
        void setArtista(Artista& a);
        Artista getArtista();
        int getAnoLancamento();
        int getnumeroReproducoes();
        string getGenero();
        friend bool operator==(const Musica& m1,const Musica& m2);
        friend std::ostream& operator<<(std::ostream& obj, const Musica& m);
        friend bool operator<(const Musica& m1, const Musica& m2);
        friend bool operator>(const Musica& m1, const Musica& m2);
};

#endif