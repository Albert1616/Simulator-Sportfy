#include "../include/Menu.h"
#include <iostream>
#include <limits>

using namespace std;
const string password = "1234";

void menu(vector<Musica> &lst_musicas, vector<Artista> &lst_artista)
{
    setlocale(LC_ALL, "portuguese");
    int op;
    int op_adm;
    int op_user;
    while (true)
    {
        cout << "Qual o tipo de acesso? " << endl;
        cout << "1 - Administrador" << endl;
        cout << "2 - Usuário" << endl;
        cout << "0 - Sair" << endl;
        cin >> op;
        system("cls");
        if (op == 1)
        {
            string password_temp;
            while (password != password_temp)
            {
                cout << "Digite a senha" << endl;
                cin >> password_temp;
                system("cls");
                if (password_temp == "s")
                {
                    break;
                }
                if (password != password_temp)
                {
                    cout << "Senha incorreta! Tente novamente" << endl;
                    cout << "Digite s para sair" << endl;
                }
            }
            while (true)
            {
                cout << "O que deseja fazer?" << endl;
                cout << "1. Cadastrar musica" << endl;
                cout << "2. Cadastrar artista" << endl;
                cout << "3. Listar musicas cadastradas" << endl;
                cout << "4. Listar artistas cadastrados" << endl;
                cout << "0. Para retornar a tela anterior" << endl;
                cin >> op_adm;
                system("cls");
                if (op_adm == 1)
                {
                    string name = "", genero = "", nameArtista = "";
                    int ano, numprod;
                    cout << "Digite o nome da musica" << endl;
                    cin >> name;
                    system("cls");
                    cout << "Digite o genero da musica" << endl;
                    cin >> genero;
                    system("cls");
                    cout << "Digite o ano de lancamento da musica" << endl;
                    cin >> ano;
                    system("cls");
                    cout << "Digite o numero de vezes que foi tocada" << endl;
                    cin >> numprod;
                    system("cls");
                    cout << "Digite o nome do artista" << endl;
                    cin >> nameArtista;
                    system("cls");
                    Artista a(nameArtista);
                    Musica m(name, ano, genero, numprod, a);
                    lst_musicas.push_back(m);
                }
                else if (op_adm == 2)
                {
                    string op = "";
                    string name = "";
                    cout << "Digite o nome do artista" << endl;
                    cin >> name;
                    system("cls");
                    Artista a(name);
                    while (op != "s" && op != "n")
                    {
                        cout << "Deseja adicionar músicas para o artista? s/n?" << endl;
                        cin >> op;
                        system("cls");
                        if (op != "s" && op != "n")
                        {
                            cout << "Opção inválida, digite uma opção válida! s/n" << endl;
                        }
                    }
                    if (op == "s")
                    {
                        int op_musica;
                        cout << "Músicas disponíveis: " << endl;
                        for (int i = 0; i < lst_musicas.size(); i++)
                        {
                            cout << i + 1 << ": " << lst_musicas[i].getTitulo() << endl;
                        }
                        do
                        {
                            int op;
                            cout << "Qual o número da música que você deseja adicionar ao artista?" << endl;
                            cin >> op;
                            system("cls");
                            if (op >= 0 && op < lst_musicas.size())
                            {
                                a.adicionarMusica(lst_musicas[op]);
                                cout << "Música adicionada com sucesso!" << endl;
                                cout << "Se deseja adicionar outra música para o artista, digite 1. Caso contrário, digite qualquer outra tecla." << endl;
                                cin >> op_musica;
                                system("cls");
                            }
                            else
                            {
                                cout << "Este número não existe! Digite um número válido." << endl;
                                op_musica = 1; // Continuar pedindo a música válida
                            }
                        } while (op_musica == 1);
                        cout << "Artista adicionado com sucesso!" << endl;
                    }
                    else
                    {
                        cout << "Artista adicionado com sucesso!" << endl;
                    }
                }
                else if (op_adm == 3)
                {
                    for (int i = 0; i < lst_musicas.size(); i++)
                    {
                        cout << i << ":" << lst_musicas[i].getTitulo() << endl;
                    }
                }
                else if (op_adm == 4)
                {
                    for (int i = 0; i < lst_artista.size(); i++)
                    {
                        cout << i << ":" << lst_artista[i].getNome() << endl;
                    }
                }
                else if (op_adm == 0)
                {
                    cout << "Retonando para a tela anterior..." << endl;
                    break;
                }
                else
                {
                    cout << "Opção invalida! digite uma opção valida" << endl;
                }
            }
        }
        if (op == 2)
        {
            string nome, email;
            cout << "Bem vindo usuário!" << endl;
            cout << "Qual o seu nome?" << endl;
            cin >> nome;
            system("cls");
            cout << "Qual o seu email?" << endl;
            cin >> email;
            system("cls");
            Perfil p(nome, email);
            cout << "Bem vindo, " << nome << "!" << endl;
            while (true)
            {
                cout << "O que você deseja fazer?" << endl;
                cout << "1. Adicionar uma música"
                     << "\t\t"
                     << "7. Ordenar as músicas" << endl;
                cout << "2. Remover uma música"
                     << "\t\t\t"
                     << "8. Ordenar os artistas" << endl;
                cout << "3. Adicionar um artista"
                     << "\t\t\t"
                     << "9. Salvar a playlist" << endl;
                cout << "4. Remover um artista"
                     << "\t\t\t"
                     << "10. Recuperar a playlist" << endl;
                cout << "5. Buscar uma música pelo nome"
                     << "\t\t"
                     << "11. Imprimir todas as músicas" << endl;
                cout << "6. Buscar um artista"
                     << "\t\t\t"
                     << "12. Imprimir todos os artistas" << endl;
                cout << "0. Sair" << endl;
                cin >> op_user;
                system("cls");
                if (op_user == 1)
                {
                    int op;
                    while (true)
                    {
                        cout << "Músicas disponíveis: " << endl;
                        for (int i = 0; i < lst_musicas.size(); i++)
                        {
                            cout << i << ": " << lst_musicas[i].getTitulo() << endl;
                        }
                        cout << "Qual o número da música que você deseja adicionar?" << endl;
                        cin >> op;
                        system("cls");
                        if (op >= 0 && op < lst_musicas.size())
                        {
                            p.adicionarMusica(lst_musicas[op]);
                            cout << "Música adicionada com sucesso!" << endl;
                            break;
                        }
                        else
                        {
                            cout << "Este número não existe! Digite um número válido." << endl;
                        }
                    }
                }
                else if (op_user == 2)
                {
                    if (p.numMusicas() == 0)
                    {
                        cout << "Voce nao tem musicas favoritas para remover!" << endl;
                    }
                    else
                    {
                        int op;
                        while (true)
                        {
                            cout << "Músicas disponíveis: " << endl;
                            p.imprimirMusicas();
                            cout << "Qual o número da música que você deseja remover?" << endl;
                            cin >> op;
                            system("cls");
                            if (op >= 0 && op < p.numMusicas())
                            {
                                cout << lst_musicas[op].getTitulo();
                                p.removerMusica(lst_musicas[op]);
                                cout << "Música removida com sucesso!" << endl;
                                break;
                            }
                            else
                            {
                                cout << "Este número não existe! Digite um número válido." << endl;
                            }
                        }
                    }
                }
                else if (op_user == 3)
                {
                    int op;
                    while (true)
                    {
                        cout << "Artistas disponíveis: " << endl;
                        for (int i = 0; i < lst_artista.size(); i++)
                        {
                            cout << i << ": " << lst_artista[i].getNome() << endl;
                        }
                        cout << "Qual o número do artista que você deseja adicionar?" << endl;
                        cin >> op;
                        system("cls");
                        if (op >= 0 && op < lst_artista.size())
                        {
                            p.adicionarArtista(lst_artista[op]);
                            cout << "Artista adicionado com sucesso!" << endl;
                            break;
                        }
                        else
                        {
                            cout << "Este número não existe! Digite um número válido." << endl;
                        }
                    }
                }
                else if (op_user == 4)
                {
                    if (p.numArtistas() == 0)
                    {
                        cout << "Voce nao tem artistas favoritos para remover!" << endl;
                    }
                    else
                    {
                        int op;
                        while (true)
                        {
                            cout << "Artistas disponíveis: " << endl;
                            p.imprimirArtistas();
                            cout << "Qual o número do artista que você deseja remover?" << endl;
                            cin >> op;
                            system("cls");
                            if (op >= 0 && op < p.numArtistas())
                            {
                                p.removerArtista(lst_artista[op]);
                                cout << "Artista removido com sucesso!" << endl;
                                break;
                            }
                            else
                            {
                                cout << "Este número não existe! Digite um número válido." << endl;
                            }
                        }
                    }
                }
                else if (op_user == 5)
                {
                    string nome;
                    cout << "Digite o nome da musica que vc deseja buscar" << endl;
                    cin.ignore();
                    getline(cin, nome);
                    system("cls");
                    if (p.buscarMusica(nome))
                    {
                        cout << "A musica " << nome << " faz parte das suas musicas favoritas!" << endl;
                    }
                    else
                    {
                        cout << "A musica " << nome << " nao faz parte das suas musicas favoritas! " << endl;
                    }
                }
                else if (op_user == 6)
                {
                    string nome;
                    cout << "Digite o nome do artista que vc deseja buscar" << endl;
                    cin.ignore();
                    getline(cin, nome);
                    system("cls");
                    if (p.buscarArtista(nome))
                    {
                        cout << "O artista " << nome << " faz parte dos artistas favoritos!" << endl;
                    }
                    else
                    {
                        cout << "O artista " << nome << " nao faz parte dos artistas favoritos! " << endl;
                    }
                }
                else if (op_user == 7)
                {
                    p.ordenaMusica();
                    cout << "Suas musicas agora estao ordenadas pelo numero de reproducoes!" << endl;
                    p.imprimirMusicas();
                }
                else if (op_user == 8)
                {
                    p.ordenaArtista();
                    cout << "Seus artistas agora estao ordenados em ordem alfabetica!" << endl;
                    p.imprimirArtistas();
                }
                else if (op_user == 9)
                {
                    ofstream arq;
                    p.salvarPlaylist(arq);
                    cout << "Sua lista de musicas favoritas foi salva!" << endl;
                    cout << "Da proxima vez que acessar o sistema basta escolher a opcao 10 e recupera-las" << endl;
                }
                else if (op_user == 10)
                {
                    ifstream arq;
                    p.recuperarPlaylist(arq);
                    cout << "Lista de musicas recuperada com sucesso!" << endl;
                }
                else if (op_user == 11)
                {
                    if (p.numMusicas() != 0)
                    {
                        cout << "---------MUSICAS FAVORITAS---------" << endl;
                        p.imprimirMusicas();
                    }else{
                        cout << "Voce nao possui musicas favoritas!" << endl;
                    }
                }
                else if (op_user == 12)
                {
                    if(p.numArtistas() != 0){
                        cout << "---------ARTISTAS FAVORITOS---------" << endl;
                        p.imprimirArtistas();
                    }else{
                        cout << "Voce nao possui artistas favoritos!" << endl;
                    }
                }
                else if (op_user == 0)
                {
                    break;
                }
                else
                {
                    cout << "Opcao invalida! digite uma opcao valida" << endl;
                }
            }
        }
        else if (op == 0)
        {
            cout << "Saindo..." << endl;
            break;
        }
    }
}