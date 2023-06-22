#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack{
    private:
        vector<T> elementos;
    public:
        ~Stack<T>();
        bool isEmpity();
        T top();
        bool find(T elemento);
        bool push(T elemento);
        bool pop();
        int getSize();
        void imprimirElmentos();   
};

template <typename T>
Stack<T>::~Stack(){
    elementos = nullptr;
}
template <typename T>
bool Stack<T>::isEmpity(){
    if(elementos.size() == 0){
        return true;
    }
    return false;
};

template <typename T>
T Stack<T>::top(){
    if(!this->isEmpity()){
        return elementos[0];
    }else{
        cout << "A pilha esta vazia!" << endl;
        return 0;
    };
};

template <typename T>
bool Stack<T>::find(T elemento){
    for(int i = 0; i<elementos.size(); i++){
        if(elementos[i] == elemento){
            return true;
        }
    }
    return false;
};

template <typename T>
bool Stack<T>::push(T elemento){
    if(!this->find(elemento)){
        elementos.push_back(elemento);
        return true;
    }else{
        cout << "Elemento ja está na pilha!" << endl;
        return false;
    };
}
template <typename T>
bool Stack<T>::pop(){
    if(!this->isEmpity()){
        elementos.pop_back();
        return true;
    }else{
        cout << "A pilha esta vazia!" << endl;
        return false;
    }
}

template <typename T>
int Stack<T>::getSize(){
    return elementos.size();
};

template <typename T>
void Stack<T>::imprimirElmentos(){
    for(int i = 0; i<elementos.size();i++){
        cout << elementos[i] << " ";
    };
}