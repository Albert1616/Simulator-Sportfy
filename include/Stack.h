#include <vector>
using namespace std;

template <class T>
class Stack{
    private:
        vector<T> elementos;
    public:
        void inserirElemento(T elemento);
        void removerElemento();
        bool isEmpity();
        int getSize();   
};