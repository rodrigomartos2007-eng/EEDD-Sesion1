#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct persona {
    char nombre[30];
    int edad;
    long telefono;
};

persona CrearPersona(const char n[30], int e, long t) {
    persona aux;
    strcpy(aux.nombre, n);
    aux.edad = e;
    aux.telefono = t;
    return aux;
}

void Escribir(persona p) {
    cout << p.nombre << " tiene " << p.edad << " anyos y su telefono es " << p.telefono << endl;
}

void EscribirPuntero(persona* p) {
    cout << p->nombre << " tiene " << p->edad << " anyos y su telefono es " << p->telefono << endl;
}

int main(int argc, char** argv) {
    persona ejemplo;

    ejemplo = CrearPersona("Jesus", 99, 123456789);
    cout << "Paso por valor" << endl;
    Escribir(ejemplo);
    cout << endl;

    ejemplo = CrearPersona("Mario", 55, 987654321);
    cout << "Paso con punteros" << endl;
    EscribirPuntero(&ejemplo);

    return 0;
}
