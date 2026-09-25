#include "Persona.hpp"
#include <cstdlib>
#include <cstdio>

void Persona::generarDNI() {
    int num = 10000000 + rand() % 90000000;
    const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    char letra = letras[num % 23];
    sprintf(dni, "%08d%c", num, letra);
}

Persona::Persona(int edad) {
    this->edad = edad;
    this->genero = rand() % 2; // 0 = Hombre, 1 = Mujer
    generarDNI();
}

Persona::~Persona() {
}

int Persona::getEdad() {
    return this->edad;
}

bool Persona::esMujer() {
    return this->genero;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::mostrar() {
    std::cout << "DNI: " << dni 
              << " | Genero: " << (genero ? "Mujer " : "Hombre") 
              << " | Edad: " << edad << std::endl;
}