#include <iostream>
#include <vector>
#include <fstream>
#include "../include/Menu.h"
#include "../include/Busca.h"
#include "../include/recuperacao.h"

int main()
{
    ifstream arq;
    vector<Artista> artistasCadastrados = lerArtistas(arq);
    vector<Musica> musicasCadastradas  = lerMusicas(arq);
    menu(musicasCadastradas,artistasCadastrados);
return 0;
}