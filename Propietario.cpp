//
// Created by lufe0 on 6/02/2023.
//

#include "Propietario.h"


Propietario::Propietario(std::string nombre) {
    this->nombre = nombre;
}

Propietario::Propietario(std::string nombre, std::string docIdentidad) {
    this->nombre = nombre;
    this->docIdentidad = docIdentidad;
}

void Propietario::mostrarInfo() {
    std::cout << "El nombre es " << this->nombre << " las edad es " << this->edad << "el doc de identidad es "
              << this->docIdentidad << std::endl;
}

std::string Propietario::getDocIdentidad() {
    return this->docIdentidad;
}

void Propietario::setDocIdentidad(std::string docIdentidad) {
    this->docIdentidad = docIdentidad;
}

int Propietario::getEdad() {
    return this->edad;
}

void Propietario::setEdad(int edad) {
    this->edad = edad;
}

std::string Propietario::getNombre() {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

