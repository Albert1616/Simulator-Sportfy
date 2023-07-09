#include <iostream>
#include <vector>
#include <fstream>
#include "../include/Menu.h"

int main()
{
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