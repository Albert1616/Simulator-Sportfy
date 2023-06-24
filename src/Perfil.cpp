#include "../include/Perfil.h"

Perfil::Perfil(){
    this->nome = "Não informado!";
    this->email = "Não informado!";
};

Perfil::Perfil(string n, string e){
    this->nome = n;
    this->email = e;
};

Perfil::~Perfil(){};

string Perfil::getNome(){
    return this->nome;
};

string Perfil::getEmail(){
    return this->email;
};

bool Perfil::adicionarMusica(Musica m){
    return this->musicasFavoritas.inserirElemento(m);
    
};
bool Perfil::removerMusica(Musica m){
    return this->musicasFavoritas.removerElemento(m);
}
bool Perfil::adicionarArtista(Artista m){
    return this->artistasFavoritos.inserirElemento(m);
    
};
bool Perfil::removerArtista(Artista m){
    return this->artistasFavoritos.removerElemento(m);
};
bool Perfil::buscarMusica(Musica m){
    return musicasFavoritas.buscarElemento(m);
};
bool Perfil::buscarArtista(Artista m){
    return artistasFavoritos.buscarElemento(m);
};
void Perfil::imprimirMusicas(){
    this->musicasFavoritas.imprimirElementos();
};
void Perfil::imprimirArtistas(){
    this->artistasFavoritos.imprimirElementos();
};