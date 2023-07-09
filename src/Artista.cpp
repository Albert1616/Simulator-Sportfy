#include <iostream>
#include "../include/Artista.h"
#include "../include/Musica.h"
#include <algorithm>

Artista::Artista(){
    this->nome = "Desconhecido";
}
Artista::Artista(string n){
    this->nome = n;
}
Artista::~Artista(){}
string Artista::getNome(){
    return this->nome;
}
void Artista::adicionarMusica(Musica m){
    this->musicas.push(m);
}
void Artista::imprimiMusicas(){
    this->musicas.imprimirElmentos();
}
bool operator==(const Artista& a1,const Artista& a2){
    std::string nome1 = a1.nome;
    std::string nome2 = a2.nome;
    std::transform(nome1.begin(), nome1.end(), nome1.begin(), ::tolower);
    std::transform(nome2.begin(), nome2.end(), nome2.begin(), ::tolower);
    return nome1 == nome2;
}
std::ostream& operator<<(std::ostream& obj, const Artista& m){
    obj << m.nome;
    return obj;
}
bool operator<(const Artista& m1, const Artista& m2){
    return m1.nome < m2.nome;
}
bool operator>(const Artista& m1, const Artista& m2){
    return m1.nome > m2.nome;
}

