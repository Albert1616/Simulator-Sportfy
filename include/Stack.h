#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

using namespace std;
class Musica;

class Stack{
    private:
        vector<Musica> elementos;
    public:
        ~Stack();
        bool isEmpity();
        string top();
        bool find(Musica elemento);
        bool push(Musica elemento);
        bool pop();
        int getSize();
        void imprimirElmentos();   
};

#endif