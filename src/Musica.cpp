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
    return musica1 == musica2;
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