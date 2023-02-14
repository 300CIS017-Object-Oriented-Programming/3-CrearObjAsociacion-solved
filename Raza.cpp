//
// Created by lufe0 on 14/02/2023.
//

#include "Raza.h"

Raza::Raza(string nombre,
           string paisOrigen) : nombre(nombre), paisOrigen(paisOrigen) {}

string Raza::getNombre() {
    return this->nombre;
}

void Raza::setNombre(string nombre) {
    this->nombre = nombre;
}

string Raza::getPaisOrigen()  {
    return this->paisOrigen;
}

void Raza::setPaisOrigen(string paisOrigen) {
    this->paisOrigen = paisOrigen;
}
