#include "Artista.h"
#include "Musica.h"
#include "Stack.h"
#include <string>
#include <fstream>
using namespace std;

class Perfil{
    private:
        string nome;
        string email;
        Set<Artista> artistasFavoritos;
        Set<Musica> musicasFavoritas;
    public:
        Perfil();
        Perfil(string n, string e);
        ~Perfil();
        string getNome();
        string getEmail();
        void adicionarMusica(Musica m);
        void removerMusica(Musica m);
        void adicionarArtista(Artista a);
        void removerArtista(Artista a);
        void buscarMusica(Musica m);
        void buscarArtista(Artista a);
        void compartilhaMusica(Musica m, Perfil p);
        void ordenaMusica();
        void ordenaArtista();
        void salvarPlaylist(ifstream &arq);
}