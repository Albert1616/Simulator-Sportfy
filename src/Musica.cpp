#include <iostream>
#include "../include/Artista.h"
#include "../include/Musica.h"
#include <algorithm>

Musica::Musica(string t, int ano, string g, int numprod, Artista a)
{
    this->titulo = t;
    this->anoLancamento = ano;
    this->genero = g;
    this->numeroReproducoes = numprod;
    this->artista = a;
}
Musica::~Musica() {}
void Musica::setArtista(Artista &a)
{
    this->artista = a;
    a.adicionarMusica(*this);
}
string Musica::getTitulo()
{
    return this->titulo;
}
string Musica::getGenero()
{
    return this->genero;
}
Artista Musica::getArtista()
{
    return this->artista;
}
int Musica::getAnoLancamento()
{
    return this->anoLancamento;
}
int Musica::getnumeroReproducoes()
{
    return this->numeroReproducoes;
}
bool operator==(const Musica &m1, const Musica &m2)
{
    string musica1 = m1.titulo;
    string musica2 = m2.titulo;
    std::transform(musica1.begin(), musica1.end(), musica1.begin(), ::tolower);
    std::transform(musica2.begin(), musica2.end(), musica2.begin(), ::tolower);
    musica1.erase(std::remove_if(musica1.begin(), musica1.end(), ::isspace), musica1.end());
    musica2.erase(std::remove_if(musica2.begin(), musica2.end(), ::isspace), musica2.end());

    string genero1 = m1.genero;
    string genero2 = m2.genero;
    std::transform(genero1.begin(), genero1.end(), genero1.begin(), ::tolower);
    std::transform(genero2.begin(), genero2.end(), genero2.begin(), ::tolower);
    genero1.erase(std::remove_if(genero1.begin(), genero1.end(), ::isspace), genero1.end());
    genero2.erase(std::remove_if(genero2.begin(), genero2.end(), ::isspace), genero2.end());
    return ((musica1 == musica2)&&(m1.anoLancamento == m2.anoLancamento)&&
    (m1.genero == m2.genero) && (m1.numeroReproducoes == m2.numeroReproducoes)
    &&(m1.artista == m2.artista));
}
std::ostream &operator<<(std::ostream &obj, const Musica &m)
{
    obj << m.titulo;
    return obj;
}
bool operator<(const Musica &m1, const Musica &m2)
{
    return m1.numeroReproducoes < m2.numeroReproducoes;
}
bool operator>(const Musica &m1, const Musica &m2)
{
    return m1.numeroReproducoes > m2.numeroReproducoes;
}