#ifndef ARTISTA_H
#define ARTISTA_H

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
};

#endif