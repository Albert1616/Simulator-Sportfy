#include "Artista.h"
#include "Musica.h"
#include "Stack.h"
#include "Set.h"
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
        bool adicionarMusica(Musica m);
        bool removerMusica(Musica m);
        bool adicionarArtista(Artista a);
        bool removerArtista(Artista a);
        bool buscarMusica(Musica m);
        bool buscarArtista(Artista a);
        void ordenaMusica();
        void ordenaArtista();
        void salvarPlaylist(ofstream &arq);
        void recuperarPlaylist(ifstream &arq);
        void imprimirMusicas();
        void imprimirArtistas();
};