//
// Created by lufe0 on 31/01/2023.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"

class Perro {
private:
    int edad;
    std::string nombre;
    Raza * pRaza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario * pVeterinario;


public:
    Perro();
    Perro( std::string nombre, std::string tamanio, std::string color, int edad );
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();

    // Sirve para relacionar dos clases cuando el objeto se debe construir
    void agregarPropietario(std::string nombre, std::string docIdentidad);

    void agregarVeterinario(std::string nombre, int aniosExperiencia);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);

    Veterinario * getVeterinario();
    int getEdad();
    void setEdad(int edad);
    Raza * getRaza();
    void setRaza(Raza * pRaza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};
#endif
