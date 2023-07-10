#include "../include/Perfil.h"
#include "../include/Ordenacao.h"
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

Perfil::Perfil()
{
    this->nome = "Não informado!";
    this->email = "Não informado!";
}
Perfil::Perfil(string n, string e)
{
    this->nome = n;
    this->email = e;
}
Perfil::~Perfil(){};

string Perfil::getNome()
{
    return this->nome;
}
string Perfil::getEmail()
{
    return this->email;
}
bool Perfil::adicionarMusica(Musica m)
{
    return this->musicasFavoritas.inserirElemento(m);
}
bool Perfil::removerMusica(Musica m)
{
    return this->musicasFavoritas.removerElemento(m);
}
bool Perfil::adicionarArtista(Artista m)
{
    return this->artistasFavoritos.inserirElemento(m);
}
bool Perfil::removerArtista(Artista m)
{
    return this->artistasFavoritos.removerElemento(m);
}
int Perfil::numMusicas()
{
    return musicasFavoritas.getSize();
}
int Perfil::numArtistas()
{
    return artistasFavoritos.getSize();
}
void Perfil::ordenaArtista()
{
    vector<Artista> a = artistasFavoritos.getElementos();
    insertionSort(a);
    artistasFavoritos.setElementos(a);
}
void Perfil::ordenaMusica()
{
    vector<Musica> m = musicasFavoritas.getElementos();
    bubleSort(m);
    musicasFavoritas.setElementos(m);
}
bool Perfil::buscarMusica(Musica m)
{
    this->ordenaMusica();
    return musicasFavoritas.buscarElemento(m, 1);
}
bool Perfil::buscarArtista(string nome)
{
    Artista a(nome);
    return artistasFavoritos.buscarElemento(a, 2);
}
void Perfil::imprimirMusicas()
{
    this->musicasFavoritas.imprimirElementos();
}
void Perfil::imprimirArtistas()
{
    this->artistasFavoritos.imprimirElementos();
}
void Perfil::salvarPlaylist(std::ofstream &arq)
{
    arq.open("../data/Musica_salvas.txt");
    if (arq.is_open())
    {
        arq << std::left
            << std::setw(20) << "Titulo" << '\t'
            << std::setw(8) << "Ano" << '\t'
            << std::setw(10) << "Genero" << '\t'
            << std::setw(28) << "Número de reproduções" << '\t'
            << std::setw(20) << "Artista" << '\t'
            << std::endl;

        std::vector<Musica> m = musicasFavoritas.getElementos();
        for (int i = 0; i < musicasFavoritas.getSize(); i++)
        {
            arq << std::left
                << std::setw(20) << m[i].getTitulo() << '\t'
                << std::setw(8) << m[i].getAnoLancamento() << '\t'
                << std::setw(10) << m[i].getGenero() << '\t'
                << std::setw(22) << m[i].getnumeroReproducoes() << '\t'
                << std::setw(28) << m[i].getArtista().getNome() << '\t'
                << std::endl;
        }
    }
    arq.close();
}
void Perfil::recuperarPlaylist(ifstream &arq)
{
    arq.open("../data/Musica_salvas.txt");
    string line;
    if (arq.is_open())
    {
        // Ignorar a primeira linha de cabeçalho
        std::getline(arq, line);
        while (std::getline(arq, line))
        {
            std::istringstream iss(line);
            std::string titulo, genero, artista;
            int ano, numReproducoes;

            // Extrai as informações da linha separadas por tabulação
            if (std::getline(iss, titulo, '\t') &&
                iss >> ano >> genero >> numReproducoes >> artista)
            {
                Artista artistaObj(artista); // Cria um objeto Artista com base na string

                // Cria o objeto de música usando o construtor especificado
                Musica musica(titulo, ano, genero, numReproducoes, artistaObj);
                musicasFavoritas.inserirElemento(musica);
            }
        }
    }
    else
    {
        cout << "Arquivo não foi aberto" << endl;
    }
}
vector<Musica> Perfil::getMusicas(){
    return musicasFavoritas.getElementos();
}
vector<Artista> Perfil::getArtistas(){
    return artistasFavoritos.getElementos();
}
