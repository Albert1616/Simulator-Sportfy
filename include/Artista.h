#ifndef ARTISTA_H
#define ARTISTA_H

#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;
class Musica;

class Artista{
    private:
        string nome;
        Stack musicas;
    public:
        Artista();
        Artista(string n);
        ~Artista();
        string getNome();
        void adicionarMusica(Musica m);
        void imprimiMusicas();
        friend bool operator==(const Artista& a1,const Artista& a2);
        friend std::ostream& operator<<(std::ostream& obj, const Artista& m);
        friend bool operator<(const Artista& m1, const Artista& m2);
        friend bool operator>(const Artista& m1, const Artista& m2);
};

#endif