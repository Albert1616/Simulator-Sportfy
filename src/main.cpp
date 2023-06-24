#include <iostream>
#include <vector>
#include "../include/Stack.h"
/* #include "../include/Busca.h" */
#include "../include/Set.h"
#include "../include/Musica.h"
#include "../include/Artista.h"
#include "../include/Perfil.h"

using namespace std;

int main(){
    Perfil x("Matheus", "asds@gmail.com");
    Musica m("Heartbreak hotel", 1957,"Rock",1500);
    Artista a("Matheus");
    x.adicionarArtista(a);
    x.adicionarMusica(m);

    /* Artista a("Matheus");
    Musica m("Heartbreak hotel", 1957,"Rock",1500);
    Musica t("Loving you", 1962,"Rock",1500);
    Musica y("Trouble", 1968,"Rock",1500);
    Musica x("Hurt", 1977,"Rock",1500);
    a.adicionarMusica(y);
    a.adicionarMusica(m);
    a.adicionarMusica(t);
    a.adicionarMusica(x);
    a.imprimiMusicas(); */

    /* Stack<int> lista;
    lista.push(10);
    lista.push(15);
    lista.push(11);
    lista.pop();
    lista.pop();
    lista.pop();
    cout << lista.getSize() << " " << lista.top() << endl;
    lista.imprimirElmentos(); */


    /* vector<int> a;
    vector<int> f = {10,7,5};
    Set<int> lista(a);
    lista.inserirElemento(10);
    lista.inserirElemento(5);
    lista.inserirElemento(7);
    lista.removerElemento(5);
    cout << lista.getSize();
    lista.imprimirElementos();
    if(lista.buscarElemento(10)){
        cout << "deu certo" << endl;
    }; */
    return 0;
}