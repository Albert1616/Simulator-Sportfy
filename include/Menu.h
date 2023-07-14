#include <vector>
#include <fstream>
#include "../include/Stack.h"
#include "../include/Set.h"
#include "../include/Musica.h"
#include "../include/Artista.h"
#include "../include/Perfil.h"
#include "../include/Busca.h"

/** *@brief função que vai receber dois vectors, um do tipo artista e outro do tipo
música, e implementa as interface das opções do usuário.
 * @param vector de musicas
 *@param vector de artista
*/
void menu(vector<Musica>&, vector<Artista>&);