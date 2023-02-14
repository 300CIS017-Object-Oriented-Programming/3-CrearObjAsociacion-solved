//
// Created by lufe0 on 14/02/2023.
//

#include "Veterinario.h"

Veterinario::Veterinario(string nombre, int aniosExperiencia) : nombre(nombre),
                                                                       aniosExperiencia(aniosExperiencia) {}

string Veterinario::getNombre()  {
    return  this-> nombre;
}

void Veterinario::setNombre(string nombre) {
    this->nombre = nombre;
}

int Veterinario::getAniosExperiencia() {
    return aniosExperiencia;
}

void Veterinario::setAniosExperiencia(int aniosExperiencia) {
    this-> aniosExperiencia = aniosExperiencia;
}
