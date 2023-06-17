#include <string>
#include "Musica.h"
#include "Stack.h"

using namespace std;

class Artista{
    private:
        string nome;
        Stack<Musica> musicas;
    public:
        Artista();
        Artista(string n);
        ~Artista();
        string getNome();
        void adicionarMusica(Musica m);
};