#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "Musica.h"
#include "Artista.h"

using namespace std;

/**
 * @brief Função para ler músicas de um arquivo.
 * 
 * @param arq O objeto ifstream que representa o arquivo de entrada.
 * @return Um vetor de objetos Musica lidos do arquivo.
 */
vector<Musica> lerMusicas(ifstream& arq);

/**
 * @brief Função para ler artistas de um arquivo.
 * 
 * @param arq O objeto ifstream que representa o arquivo de entrada.
 * @return Um vetor de objetos Artista lidos do arquivo.
 */
vector<Artista> lerArtistas(ifstream& arq);