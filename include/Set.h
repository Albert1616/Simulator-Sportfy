#include <vector>
using namespace std;

template <class T>
class Set{
    private:
        vector<T> elementos;
    public:
        void inserirElemento(T elemento);
        void removerElemento(T elemento);
        bool buscarElemento(T elemento, int tipoBusca);
        int getSize();
};