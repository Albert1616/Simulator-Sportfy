# Simulator Sportify 
[![NPM](https://img.shields.io/npm/l/react)](https://github.com/Albert1616/Simulator-Sportfy/blob/main/LICENSE) 

# Sobre o projeto

Este projeto é um dos requisitos obrigatórios para a conclusão da displina Linguagem de programação 1 e foi desenvolvido sob a supervisão
do professor PATRICK CESAR ALVES TERREMATTE.

Simulator Sportify é um sistema que visa reproduzir algumas das funções básicas do app Sportify, tais como, criar um perfil, criar uma playlist de músicas, adicionar artístas favoritos, etc...

Para a implementação deste projeto, foram ultilizadas duas TDAs(Tipos Abstratos de Dados): pilha e conjunto.A pilha é ultilizada para
armazenar as músicas relacionadas a um artísta, e possui os métodos de inserir um elemento, remover um elemento, verificar se a pilha está
vazia e retornar a quantidade de elementos da pilha. Enquanto que o conjunto armazena os artistas favoritos de um perfil e as músicas favoritas de um perfil, e possui os métodos de inserir um elemento, remover um elemento,buscar um elemento e retornar a quantidade de elementos.

Para a ordenação dos conjuntos, forma ultilizados três métodos diferentes de ordenação, sendo eles: Buble Sort, Insetion Sort e o Quick Sort. O Buble Sort, de um modo geral, realiza compações sucessivas entre os elementos e se estiverem fora de ordem são trocados; ele possui complexidade Θ(n^2) tanto para o melhor quanto para o pior caso. O Insertion Sort tem sua ideia fundamentada da sequinte forma: é construida a lista ordenada um elemento de cada vez, inserindo cada elemento na posição correta; ele possui complexidade Θ(n^2) no pior caso, quando o vetor está ordenada em ordem inversa, e complexidade Θ(n) no melhor caso, quando o vetor ja está ordenado.A ideia geral do Quick Sort é selecionar um elemento da lista como pivô e particionar a lista ao redor do pivô, colocando os elementos menores do que o pivô à esquerda e os elementos maiores à direita; sua complexidade é Θ(n*log2n) para o melhor caso e no pior caso,no qual o pivô é escolhido de forma inadeguada, é Θ(n^2).

## Modelo conceitual
![Modelo Conceitual](https://github.com/Albert1616/Simulator-Sportify/blob/master/assets/Simulator%20Sportyfi%20%20-%20diagram%20class.png)

# Tecnologias utilizadas
- C++
 
# Como executar o projeto
- Basta executar o comando 'make run' na pasta /Makefile

# clonar repositório
- git clone https://github.com/Albert1616/Simulator-Sportify

# Autor
Matheus Albert da Silva Araújo

https://www.linkedin.com/in/matheus-ara%C3%BAjotec/
