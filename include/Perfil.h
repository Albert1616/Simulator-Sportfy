#include "Artista.h"
#include "Musica.h"
#include "Stack.h"
#include "Set.h"
#include <string>
#include <fstream>
using namespace std;

/**
 * @brief Classe Perfil que representa um perfil de usuário.
 */
class Perfil{
    private:
        string nome; /**< Nome do perfil. */
        string email; /**< Email do perfil. */
        Set<Artista> artistasFavoritos; /**< Conjunto de artistas favoritos do perfil. */
        Set<Musica> musicasFavoritas; /**< Conjunto de músicas favoritas do perfil. */
    public:
        /**
         * @brief Construtor padrão da classe Perfil.
         */
        Perfil();

        /**
         * @brief Construtor da classe Perfil.
         * @param n O nome do perfil.
         * @param e O email do perfil.
         */
        Perfil(string n, string e);

        /**
         * @brief Destrutor da classe Perfil.
         */
        ~Perfil();

        /**
         * @brief Obtém o nome do perfil.
         * @return O nome do perfil.
         */
        string getNome();

        /**
         * @brief Obtém o email do perfil.
         * @return O email do perfil.
         */
        string getEmail();

        /**
         * @brief Obtém o número de músicas favoritas do perfil.
         * @return O número de músicas favoritas do perfil.
         */
        int numMusicas();

        /**
         * @brief Obtém o número de artistas favoritos do perfil.
         * @return O número de artistas favoritos do perfil.
         */
        int numArtistas();

        /**
         * @brief Adiciona uma música às músicas favoritas do perfil.
         * @param m A música a ser adicionada.
         * @return true se a música foi adicionada com sucesso, false caso contrário.
         */
        bool adicionarMusica(Musica m);

        /**
         * @brief Remove uma música das músicas favoritas do perfil.
         * @param m A música a ser removida.
         * @return true se a música foi removida com sucesso, false caso contrário.
         */
        bool removerMusica(Musica m);

        /**
         * @brief Adiciona um artista aos artistas favoritos do perfil.
         * @param a O artista a ser adicionado.
         * @return true se o artista foi adicionado com sucesso, false caso contrário.
         */
        bool adicionarArtista(Artista a);

        /**
         * @brief Remove um artista dos artistas favoritos do perfil.
         * @param a O artista a ser removido.
         * @return true se o artista foi removido com sucesso, false caso contrário.
         */
        bool removerArtista(Artista a);

        /**
         * @brief Verifica se uma música está nas músicas favoritas do perfil.
         * @param m A música a ser buscada.
         * @return true se a música está nas músicas favoritas do perfil, false caso contrário.
         */
        bool buscarMusica(Musica m);

        /**
         * @brief Verifica se um artista está nos artistas favoritos do perfil.
         * @param nome O nome do artista a ser buscado.
         * @return true se o artista está nos artistas favoritos do perfil, false caso contrário.
         */
        bool buscarArtista(string nome);

        /**
         * @brief Ordena as músicas favoritas do perfil.
         */
        void ordenaMusica();

        /**
         * @brief Ordena os artistas favoritos do perfil.
         */
        void ordenaArtista();

        /**
         * @brief Salva a playlist do perfil em um arquivo.
         * @param arq O arquivo onde a playlist será salva.
         */
        void salvarPlaylist(ofstream &arq);

        /**
         * @brief Recupera a playlist do perfil de um arquivo.
         * @param arq O arquivo de onde a playlist será recuperada.
         */
        void recuperarPlaylist(ifstream &arq);

        /**
         * @brief Imprime as músicas favoritas do perfil.
         */
        void imprimirMusicas();

        /**
         * @brief Imprime os artistas favoritos do perfil.
         */
        void imprimirArtistas();

        /**
         * @brief Obtém as músicas favoritas do perfil.
         * @return Um vetor com as músicas favoritas do perfil.
         */
        vector<Musica> getMusicas();

        /**
         * @brief Obtém os artistas favoritos do perfil.
         * @return Um vetor com os artistas favoritos do perfil.
         */
        vector<Artista> getArtistas();
};
