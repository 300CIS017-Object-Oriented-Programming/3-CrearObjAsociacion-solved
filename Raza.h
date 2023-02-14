//
// Created by lufe0 on 14/02/2023.
//

#ifndef INC_3_CREAROBJASOCIACIONSOLVED_RAZA_H
#define INC_3_CREAROBJASOCIACIONSOLVED_RAZA_H

#include <iostream>

using std::string;

class Raza {
    string nombre;
    string paisOrigen;
public:
    Raza() = default;
    Raza( string nombre, string paisOrigen);

    string getNombre();

    void setNombre(string nombre);

    string getPaisOrigen();

    void setPaisOrigen(string paisOrigen);
};


#endif //INC_3_CREAROBJASOCIACIONSOLVED_RAZA_H
