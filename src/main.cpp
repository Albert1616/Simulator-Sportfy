#include <iostream>
#include <vector>
#include "../include/Stack.h"
/* #include "../include/Busca.h" */
#include "../include/Set.h"
#include "../include/Musica.h"
#include "../include/Artista.h"
#include "../include/Perfil.h"

using namespace std;
const string password = "12345";

int main()
{
    Perfil a("Matheus", "matheus@gmail.com");
    cout << a.getNome() << " " << a.getEmail() << endl;
    a.adicionarArtista(Artista("Elvis"));
    a.adicionarMusica(Musica("Dont be cruel",1960, "rock", 5000));
    a.imprimirArtistas();
    a.imprimirMusicas();
    if(a.buscarMusica(Musica("Dontcruel",1960, "rock", 5000))){
        cout << "Encontrada!" << endl;
    };

    /* int op;
    vector<Artista> artistas_cadastrados;
    vector<Musica> musicas_cadastradas;
    string password_temp;
    while (true)
    {
        cout << "Qual o tipo de acesso? " << endl;
        cout << "1 - Administrador" << endl;
        cout << "2 - Usuário" << endl;
        cout << "0 - Sair" << endl;
        cin >> op;
        if (op == 0)
        {
            cout << "Saindo..." << endl;
            break;
        }
        else if (op == 1)
        {
            cout << "Digite a senha" << endl;
            cin >> password_temp;
            if (password == password_temp)
            {
                int op_user;
                cout << "Acesso liberado" << endl;
                while (true)
                {
                    cout << "O que deseja fazer?" << endl;
                    cout << "1 - Cadastrar musica" << endl;
                    cout << "2 - Cadastrar artista" << endl;
                    cout << "3 - Listar musicas cadastradas" << endl;
                    cout << "4 - Listar artistas cadastrados" << endl;
                    cin >> op_user;
                    switch (op_user)
                    {
                    case 0:{
                        cout << "Saindo..." << endl;
                        return 0;
                        break; 
                    }
                    case 1:
                    {
                        string name = "", genero = "", nameArtista = "";
                        int ano, numprod;
                        Artista a(nameArtista);
                        cout << "Digite o nome da musica" << endl;
                        cin >> name;
                        cout << "Digite o genero da musica" << endl;
                        cin >> genero;
                        cout << "Digite o ano de lancamento da musica" << endl;
                        cin >> ano;
                        cout << "Digite o numero de vezes que foi tocada" << endl;
                        cin >> numprod;
                        cout << "Digite o nome do artista" << endl;
                        cin >> nameArtista;
                        Musica m(name, ano, genero, numprod, a);
                        musicas_cadastradas.push_back(m);
                        break;
                    }
                }
            }
        }else
            {
                cout << "Senha incorreta!" << endl;
            }
        }
        else
        {
            cout << "Bem vindo usuário!" << endl;
        };
    } */
// Artista a("Matheus");
// Musica m("Heartbreak hotel", 1957,"Rock",1500);
// Musica t("Loving you", 1962,"Rock",1500);
// Musica y("Trouble", 1968,"Rock",1500);
// Musica x("Hurt", 1977,"Rock",1500);
// a.adicionarMusica(y);
// a.adicionarMusica(m);
// a.adicionarMusica(t);
// a.adicionarMusica(x);
// a.imprimiMusicas();

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