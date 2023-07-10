#include "../include/Menu.h"
#include <iostream>
#include <limits>

using namespace std;
const string password = "1234";

void menu(vector<Musica> &lst_músicas, vector<Artista> &lst_artista)
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
                cout << "1. Cadastrar música" << endl;
                cout << "2. Cadastrar artista" << endl;
                cout << "3. Listar músicas cadastradas" << endl;
                cout << "4. Listar artistas cadastrados" << endl;
                cout << "0. Para retornar a tela anterior" << endl;
                cin >> op_adm;
                system("cls");
                if (op_adm == 1)
                {
                    string name = "", genero = "", nameArtista = "";
                    int ano, numprod;
                    cout << "Digite o nome da música" << endl;
                    cin >> name;
                    system("cls");
                    cout << "Digite o gênero da música" << endl;
                    cin >> genero;
                    system("cls");
                    cout << "Digite o ano de lançamento da música" << endl;
                    cin >> ano;
                    system("cls");
                    cout << "Digite o número de vezes que foi tocada" << endl;
                    cin >> numprod;
                    system("cls");
                    cout << "Digite o nome do artista" << endl;
                    cin >> nameArtista;
                    system("cls");
                    Artista a(nameArtista);
                    Musica m(name, ano, genero, numprod, a);
                    lst_músicas.push_back(m);
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
                        int op_música;
                        cout << "Músicas disponíveis: " << endl;
                        for (int i = 0; i < lst_músicas.size(); i++)
                        {
                            cout << i + 1 << ": " << lst_músicas[i].getTitulo() << endl;
                        }
                        do
                        {
                            int op;
                            cout << "Qual o número da música que você deseja adicionar ao artista?" << endl;
                            cin >> op;
                            system("cls");
                            if (op >= 0 && op < lst_músicas.size())
                            {
                                a.adicionarMusica(lst_músicas[op]);
                                cout << "Música adicionada com sucesso!" << endl;
                                cout << "Se deseja adicionar outra música para o artista, digite 1. Caso contrário, digite qualquer outra tecla." << endl;
                                cin >> op_música;
                                system("cls");
                            }
                            else
                            {
                                cout << "Este número não existe! Digite um número válido." << endl;
                                op_música = 1;
                            }
                        } while (op_música == 1);
                        cout << "Artista adicionado com sucesso!" << endl;
                    }
                    else
                    {
                        cout << "Artista adicionado com sucesso!" << endl;
                    }
                }
                else if (op_adm == 3)
                {
                    for (int i = 0; i < lst_músicas.size(); i++)
                    {
                        cout << i << ":" << lst_músicas[i].getTitulo() << endl;
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
                        for (int i = 0; i < lst_músicas.size(); i++)
                        {
                            cout << i << ": " << lst_músicas[i].getTitulo() << endl;
                        }
                        cout << "Qual o número da música que você deseja adicionar?" << endl;
                        cin >> op;
                        system("cls");
                        if (op >= 0 && op < lst_músicas.size())
                        {
                            if (p.buscarMusica(lst_músicas[op]))
                            {
                                cout << "Essa música ja está na sua playlist!" << endl;
                                break;
                            }
                            else
                            {
                                p.adicionarMusica(lst_músicas[op]);
                                cout << "Música adicionada com sucesso!" << endl;
                                break;
                            }
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
                        cout << "Voce não tem músicas favoritas para remover!" << endl;
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
                                vector<Musica> auxiliar = p.getMusicas();
                                p.removerMusica(auxiliar[op]);
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
                        cout << "Voce não tem artistas favoritos para remover!" << endl;
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
                                if (p.buscarArtista(lst_artista[op].getNome()))
                                {
                                    cout << "Este artista ja está entre os seus favoritos!" << endl;
                                    break;
                                }
                                else
                                {
                                    p.removerArtista(lst_artista[op]);
                                    cout << "Artista removido com sucesso!" << endl;
                                    break;
                                }
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
                    string nome, genero, nomeArtista;
                    int ano, numReproducao;
                    cout << "Digite o nome da música que vc deseja buscar" << endl;
                    cin.ignore();
                    getline(cin, nome);
                    system("cls");
                    cout << "Digite o ano de lançamento" << endl;
                    cin >> ano;
                    system("cls");
                    cout << "Digite o genero" << endl;
                    cin.ignore();
                    getline(cin, genero);
                    system("cls");
                    cout << "Digite o número de reproduções" << endl;
                    cin >> numReproducao;
                    system("cls");
                    cout << "Digite o nome do artista a que ela pertence" << endl;
                    cin.ignore();
                    getline(cin, nomeArtista);
                    system("cls");
                    Musica busca(nome, ano, genero, numReproducao, Artista(nomeArtista));
                    if (p.buscarMusica(busca))
                    {
                        cout << "A música " << nome << " faz parte das suas músicas favoritas!" << endl;
                    }
                    else
                    {
                        cout << "A música " << nome << " não faz parte das suas músicas favoritas! " << endl;
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
                        cout << "O artista " << nome << " não faz parte dos artistas favoritos! " << endl;
                    }
                }
                else if (op_user == 7)
                {
                    p.ordenaMusica();
                    cout << "Suas músicas agora estão ordenadas pelo número de reproducoes!" << endl;
                    p.imprimirMusicas();
                }
                else if (op_user == 8)
                {
                    p.ordenaArtista();
                    cout << "Seus artistas agora estão ordenados em ordem alfabetica!" << endl;
                    p.imprimirArtistas();
                }
                else if (op_user == 9)
                {
                    ofstream arq;
                    p.salvarPlaylist(arq);
                    cout << "Sua lista de músicas favoritas foi salva!" << endl;
                    cout << "Da proxima vez que acessar o sistema basta escolher a opção 10 e recupera-las" << endl;
                }
                else if (op_user == 10)
                {
                    ifstream arq;
                    p.recuperarPlaylist(arq);
                    cout << "Lista de músicas recuperada com sucesso!" << endl;
                }
                else if (op_user == 11)
                {
                    if (p.numMusicas() != 0)
                    {
                        cout << "---------MÚSICAS FAVORITAS---------" << endl;
                        p.imprimirMusicas();
                    }
                    else
                    {
                        cout << "Voce não possui músicas favoritas!" << endl;
                    }
                }
                else if (op_user == 12)
                {
                    if (p.numArtistas() != 0)
                    {
                        cout << "---------ARTISTAS FAVORITOS---------" << endl;
                        p.imprimirArtistas();
                    }
                    else
                    {
                        cout << "Voce não possui artistas favoritos!" << endl;
                    }
                }
                else if (op_user == 0)
                {
                    break;
                }
                else
                {
                    cout << "opção invalida! digite uma opção valida" << endl;
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