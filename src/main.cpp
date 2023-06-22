#include <iostream>
#include <vector>
#include "../include/Stack.h"
#include "../include/Busca.h"
#include "../include/Set.h"

using namespace std;

int main(){
    Stack<int> lista;
    lista.push(10);
    lista.push(15);
    lista.push(11);
    lista.pop();
    lista.pop();
    lista.pop();
    cout << lista.getSize() << " " << lista.top() << endl;
    lista.imprimirElmentos();


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