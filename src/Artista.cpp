#include "../include/Artista.h"
#include "../include/Musica.h"

Artista::Artista(){
    this->nome = "Desconhecido";
};

Artista::Artista(string n){
    this->nome = n;
};

Artista::~Artista(){};

string Artista::getNome(){
    return this->nome;
};

void Artista::adicionarMusica(Musica m){
    this->musicas.push(m);
};

void Artista::imprimiMusicas(){
    this->musicas.imprimirElmentos();
};