//
// Created by lufe0 on 6/02/2023.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
#include <iostream>

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(std::string nombre);
    Propietario(std::string nombre, std::string docIdentidad);
    void mostrarInfo();
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getDocIdentidad();
    void setDocIdentidad(std::string docIdentidad);
    int getEdad();
    void setEdad(int edad);

};


#endif //PROPIETARIO_H
