#ifndef LISTA_H
#endif // LISTA_H
#define LISTA_H
#include <iostream>

class ListaEnteros{
private:
    int cuenta;
    int capacidad;
    int *items;
    void agrandar();
public:
    ListaEnteros(int capacidad);
    ListaEnteros();
    ListaEnteros(const ListaEntero &otraLista);
    ~ListaEnteros();
    bool estaVacia();
    int tamanio();
    void insertar(int indice, int item);
    void adjuntar(int item);
    int obtener(int indice);
    bool contiene(int indice);
    int remover(int indice);
    void imprimirLista();

};

ListaEnteros::ListaEnteros(int capacidad){
    this->cuenta = 0;
    this->capacidad = capacidad;
    this->items = new int[capacidad];

}

ListaEnteros::~ListaEnteros(){
    delete[] items;
}

bool ListaEnteros::estaVacia(){
    return this->cuenta == 0;
}

int ListaEnteros::tamanio(){
    return this->cuenta;
}


int ListaEnteros::obtener(int indice){
    if(indice < 0 || indice >= this->cuenta) throw "indice fuera";
    if(this->estaVacia()) throw "no recuperar";
    return this->items[indice];

}

void ListaEntero::insertar(int indice, int item){
    if(indice < 0 || indice > this->cuenta) throw "indice fuera";
    if(this->cuenta >= this->capacidad) this->agrandar();

    for(int i = cuenta - 1; i>= indice; i--){
        this->items[i+1] =this->items[i];

    }

    this->items[indice]=item;
    this->cuenta++;
}

void ListaEnteros::agrandar(){
int *temp = this->items;
this->capacidad *=2;
this->items = new int[capacidad];
for(int i=0; i<this->cuenta; i++){
    this->items[i] = temp[i];

}
delete[] temp;

void ListaEnteros::adjuntar(int item){
    this->insertar(this-<cuenta, item);
}
bool ListaEnteros:.contiene(int item){
    for(int =0;i< this->; i++){
        if(this->items[i] == item)
        return true;
    }
    return false;
}

int ListaEnteros::remover(int indice){
    if(this->estaVacia())throw "lista vacia";
    if(indice<0 || indice >= this->cuenta) throw "fuera raango";

    int valor = this->items[indice];
    for(int i= indice;i< cuenta - 1;i++){
        this->items[i] = this->items[i+1];

    }
    this->cuenta--;
    return valor;
}

void ListaEnteros::imprimirLista(){
    std::cout << "| ";
    for(int i=0;i< this->cuenta;i++){
        std:: cout << this->obtener(i)<< "| ";
    }
    std::cout <<std::endl;
}
#endif






}









