#include <iostream>

using namespace std;

template<typename T>

class node{
    public:
        T value; //Dato
        node<T> *next; //Siguiente elemento

        node(T x){
            value = x;
            next = nullptr;
        }
};

template<typename T>

class lista{
    
    //Punteros de inicio y final de la lista
    node<T> *iniLista;
    node<T> *finLista;
    size_t tamLista = 0;

    public:
        

        lista(){
            iniLista = nullptr;
            finLista = nullptr;
        }

        void insertar(T dato){
            node<T> *nuevoNodo;

            nuevoNodo = new node<T>(dato);

            if(iniLista == nullptr){
                iniLista = finLista = nuevoNodo;
            }else{
                finLista->next = nuevoNodo;
                finLista = nuevoNodo;
            }

            this->tamLista++;

            return;
        }

        void imprimirLista(){
            for(node<T> * it = iniLista; it != nullptr; it = it->next){
                cout << it->value << endl;
            }

            
        }

};

int main(){

    lista <int> l;
	int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        l.insertar(temp);
    }


	l.imprimirLista();

    return 0;

}