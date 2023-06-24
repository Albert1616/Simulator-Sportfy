#include "../include/Stack.h"
#include "../include/Musica.h"

Stack::~Stack(){
    elementos = {};
}
bool Stack::isEmpity(){
    if(elementos.size() == 0){
        return true;
    }
    return false;
};


string Stack::top(){
    if(!this->isEmpity()){
        return elementos.back().getTitulo();
    }else{
        cout << "A pilha esta vazia!" << endl;
        return 0;
    };
};

bool Stack::find(Musica elemento){
    for(int i = 0; i<elementos.size(); i++){
        if(elementos[i].getTitulo() == elemento.getTitulo()){
            return true;
        }
    }
    return false;
};

bool Stack::push(Musica elemento){
    if(!this->find(elemento)){
        elementos.push_back(elemento);
        return true;
    }else{
        cout << "Elemento ja está na pilha!" << endl;
        return false;
    };
}

bool Stack::pop(){
    if(!this->isEmpity()){
        elementos.pop_back();
        return true;
    }else{
        cout << "A pilha esta vazia!" << endl;
        return false;
    }
}

int Stack::getSize(){
    return elementos.size();
};

void Stack::imprimirElmentos(){
    for(int i = 0; i<elementos.size();i++){
        cout << elementos[i].getTitulo() << " ";
    };
}