#include "Artista.h"
#include <string>
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
        Musica(string t, Artista a,int ano, string g);
        ~Musica();
        string getTitulo();
        string getArtista();
        int getAnoLancamento();
        int getnumeroReproducoes();
        string getGenero();
}