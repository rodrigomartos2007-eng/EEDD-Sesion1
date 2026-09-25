#include "Pila.hpp"

Pila::Pila() {
    ultimo = NULL;
    longitud = 0;
}

void Pila::insertar(int v) {
    pnodoPila nuevo = new NodoPila(v, ultimo);
    ultimo = nuevo;
    longitud++;
}

int Pila::extraer() {
    if (!ultimo) {
        return 0;
    }
    pnodoPila nodo = ultimo;
    ultimo = nodo->siguiente;
    int v = nodo->valor;
    longitud--;
    delete nodo;
    return v;
}

int Pila::cima() {
    if (!ultimo) {
        return 0;
    }
    return ultimo->valor;
}

void Pila::mostrar() {
    pnodoPila aux = ultimo;
    cout << "\tEl contenido de la pila es: ";
    while (aux) {
        cout << "->" << aux->valor;
        aux = aux->siguiente;
    }
    cout << endl;
}

int Pila::getLongitud() {
    return this->longitud;
}

Pila::~Pila() {
    pnodoPila aux;
    while (ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}