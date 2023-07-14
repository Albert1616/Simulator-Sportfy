#include "../include/recuperacao.h"

vector<Musica> lerMusicas(ifstream& arq)
{
    arq.open("../data/MusicaSistema.txt");
    vector<Musica> lst_musicas;
    if (arq.is_open())
    {
        string line;
        getline(arq, line); // Ignorar a primeira linha do arquivo

        while (getline(arq, line))
        {
            istringstream iss(line);
            string titulo, genero, artista;
            int ano, numReproducoes;

            if (getline(iss, titulo, '\t') && iss >> ano >> genero >> numReproducoes >> artista)
            {
                Artista artistaObj(artista);
                Musica musica(titulo, ano, genero, numReproducoes, artistaObj);
                lst_musicas.push_back(musica);
            }
        }
    }
    else
    {
        cout << "Não foi possível abrir o arquivo" << endl;
    }

    return lst_musicas;
}

vector<Artista> lerArtistas(ifstream& arq){
    arq.open("../data/ArtistaSistema.txt");
    vector<Artista> lst_artistas;
    string line;
    if(arq.is_open()){
        getline(arq,line);
        while(arq >> line){
            Artista a(line);
            lst_artistas.push_back(a);
        }
        arq.close();
    }else{
        cout << "Arquivo não foi aberto" << endl;
    }
    return lst_artistas;
}