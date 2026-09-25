#include "Cola.hpp"

Cola::Cola() {
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

void Cola::insertar(int v) {
    pnodoCola nuevo = new NodoCola(v);
    if (ultimo) {
        ultimo->siguiente = nuevo;
    }
    ultimo = nuevo;
    if (!primero) {
        primero = nuevo;
    }
    longitud++;
}

int Cola::eliminar() {
    pnodoCola nodo = primero;
    if (!nodo) {
        return 0;
    }
    primero = nodo->siguiente;
    int v = nodo->valor;
    delete nodo;
    if (!primero) {
        ultimo = NULL;
    }
    longitud--;
    return v;
}

int Cola::verPrimero() {
    if (!primero) {
        return 0;
    }
    return primero->valor;
}

void Cola::mostrar() {
    pnodoCola aux = primero;
    cout << "\tEl contenido de la cola es: ";
    while (aux) {
        cout << "->" << aux->valor;
        aux = aux->siguiente;
    }
    cout << endl;
}

Cola::~Cola() {
    while (primero) {
        eliminar();
    }
}
