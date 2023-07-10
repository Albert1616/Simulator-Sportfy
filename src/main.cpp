#include <iostream>
#include <vector>
#include <fstream>
#include "../include/Menu.h"
#include "../include/Busca.h"

int main()
{
    /* std::ifstream arq;
    Perfil p("Matheus", "email");
    p.recuperarPlaylist(arq);
    p.imprimirMusicas();
    p.removerMusica(Musica("Dont be cruel",1960,"rock",54000,Artista("Elvis")));
    p.removerMusica(Musica("Trouble",1960,"rock",5000));
    p.removerMusica(Musica("Love me", 1950, "romantico", 200, Artista("Elvis")));
    p.imprimirMusicas(); */
    /* vector<Musica> v = {Musica("Love me", 2010, "rock", 500),
    Musica("Love", 2000, "a", 100)};   
    if(Busca_binaria(0,2,m,v)){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    } */
    vector<Artista> artistasCadastrados;
    vector<Musica> musicasCadastradas;
    musicasCadastradas.push_back(Musica("Love me", 1950, "romantico", 200, Artista("Elvis")));
    musicasCadastradas.push_back(Musica("Loving you", 1964, "romantico", 5021, Artista("Elvis")));
    musicasCadastradas.push_back(Musica("Hook on the falling", 1985, "pop", 200000, Artista("loko")));
    musicasCadastradas.push_back(Musica("Ar", 1987, "rock", 1500, Artista("l")));
    artistasCadastrados.push_back(Artista("Albert"));
    artistasCadastrados.push_back(Artista("Matheus"));
    artistasCadastrados.push_back(Artista("Davi"));
    artistasCadastrados.push_back(Artista("Rob"));
    menu(musicasCadastradas,artistasCadastrados);
return 0;
}