//
// Created by lufe0 on 14/02/2023.
//

#ifndef INC_3_CREAROBJASOCIACIONSOLVED_VETERINARIO_H
#define INC_3_CREAROBJASOCIACIONSOLVED_VETERINARIO_H

#include<iostream>

using std::string;

class Veterinario {
private:
    string nombre;
    int aniosExperiencia;

public:
    Veterinario() = default;
    Veterinario(string nombre, int aniosExperiencia);

    string getNombre();

    void setNombre(string nombre);

    int getAniosExperiencia();

    void setAniosExperiencia(int aniosExperiencia);
};


#endif //INC_3_CREAROBJASOCIACIONSOLVED_VETERINARIO_H
